#include "GameForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GameSnake2::GameForm form;
	Application::Run(% form);
}

struct Vector2 {
	int X, Y;
};

Vector2 direction;
Vector2 positionFruit;
Vector2 gameArea;

// Form constructor
GameSnake2::GameForm::GameForm(void) {

	InitializeComponent();

	gameArea.X = 500;
	gameArea.Y = 500;

	firstLaunch = true;
	NewGame();
}
void GameSnake2::GameForm::GeneratePositionFruit() {
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(10, gameArea.X);
	positionFruit.Y = rand->Next(120, gameArea.Y);

	for (int i = 0; i < score; i++) {
		if (positionFruit.X == Serpens[i]->Location.X ||
			positionFruit.Y == Serpens[i]->Location.Y) {
			GeneratePositionFruit();
		}
	}

	int tempX = positionFruit.X % step;
	positionFruit.X -= tempX;

	int tempY = positionFruit.Y % step;
	positionFruit.Y -= tempY;

	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	this->Controls->Add(fruit);
}

void GameSnake2::GameForm::Eating(){
	if(Serpens[0]->Location.X == positionFruit.X && Serpens[0]->Location.Y == positionFruit.Y){
		labelScore->Text = "Points: " + ++score;

		Serpens[score] = gcnew PictureBox();
		Serpens[score]->Location = Point(Serpens[score-1]->Location.X + step * direction.X, Serpens[score-1]->Location.Y + step * direction.Y);
		Serpens[score]->BackColor = Color::Red;
		Serpens[score]->Width = step;
		Serpens[score]->Height = step;
		this->Controls->Add(Serpens[score]);

		GeneratePositionFruit();
	}
}

void GameSnake2::GameForm::Movement(){
	for (int i = score; i >= 1; i--){
		Serpens[i]->Location = Serpens[i - 1]->Location;
	}
	Serpens[0]->Location = Point(Serpens[0]->Location.X + step * direction.X, Serpens[0]->Location.Y + step * direction.Y);
}

void GameSnake2::GameForm::EatYourself(){
	for (int i = 1; i < score; i++){
		if (Serpens[0]->Location == Serpens[i]->Location){
			GameOver();
		}
	}
}

void GameSnake2::GameForm::GameOver(){
	play = true;
	die = true;

	labelGameOver->Visible = true;
	timer->Stop();
}

void GameSnake2::GameForm::NewGame(){
	if(!GameSnake2::GameForm::firstLaunch){
		this->Controls->Remove(fruit);

		for (int i = 0; i <= score; i++){
			this->Controls->Remove(Serpens[i]);
		}

		score = 0;
	}
	else
		firstLaunch = false;

	Serpens = gcnew array <PictureBox^, 1>(400);
	Serpens[0] = gcnew PictureBox();
	Serpens[0]->Location = Point(200, 200);
	Serpens[0]->BackColor = Color::Green;
	Serpens[0]->Width = step;
	Serpens[0]->Height = step;

	score = 0;
	this->Controls->Add(Serpens[0]);

	fruit = gcnew PictureBox();
	fruit->BackColor = Color::Yellow;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	timer->Interval = updateInrerval;
	timer->Start();

	direction.X = 1;
	direction.Y = 0;

	play = true;
	die = false;

	labelScore->Text = "Счет: 0";

	labelGameOver->Visible = false;
	groupBoxSettings->Visible = false;
}

void GameSnake2::GameForm::CheckBorders(){
	if (Serpens[0]->Location.X >= pictureBoxRight->Location.X || Serpens[0]->Location.X <= pictureBoxLeft->Location.X){
		GameOver();
	}
	if (Serpens[0]->Location.Y <= pictureBoxUp->Location.Y || Serpens[0]->Location.Y >= pictureBoxLower->Location.Y){
		GameOver();
	}

	labelCoordinates->Text = "Coords: (" + Convert::ToString(Serpens[0]->Location.X) + ", " + Convert::ToString(Serpens[0]->Location.Y);

}

System::Void GameSnake2::GameForm::exitToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e){
	Application::Exit();
	return System::Void();
}
System::Void GameSnake2::GameForm::newGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	NewGame();
	return System::Void();
}

System::Void GameSnake2::GameForm::informationAboutGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	MessageBox::Show("Игра началась!");
	return System::Void();
}

System::Void GameSnake2::GameForm::pauseRepauseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	if (play){
		play = false;
	}
	else{
		play = true;
		timer->Start();
	}
	return System::Void();
}

System::Void GameSnake2::GameForm::settingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
	if (groupBoxSettings->Visible == false){
		play = true;

		buttonApplySpeed->Enabled = true;
		numericUpDownSpeedSnake->Enabled = true;
		groupBoxSettings->Visible = true;
	}
	else{
		play = true;
		timer->Start();

		buttonApplySpeed->Enabled = false;
		numericUpDownSpeedSnake->Enabled = false;
		groupBoxSettings->Visible = false;
	}
	return System::Void();
}

System::Void GameSnake2::GameForm::ButtonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e){
	updateInrerval = Convert::ToDouble(numericUpDownSpeedSnake->Value);
	timer->Interval = updateInrerval;
	buttonApplySpeed->Enabled = false;
	numericUpDownSpeedSnake->Enabled = false;
	groupBoxSettings->Visible = false;

	play = true;
	timer->Start();

	return System::Void();
}

System::Void GameSnake2::GameForm::GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e){
	
	if (e->KeyCode.ToString() == "Right"){
		direction.X = 1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "Left"){
		direction.X = -1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "Up"){
		direction.X = 0;
		direction.Y = -1;
	}
	else if (e->KeyCode.ToString() == "Down"){
		direction.X = 0;
		direction.Y = 1;
	}

	return System::Void();
}

void GameSnake2::GameForm::GameForm_Update(System::Object^ sender, System::EventArgs^ e){

	if (!die && play){
		Movement();

		Eating();
		EatYourself();
		CheckBorders();
	}
	else if (die && play){
		MessageBox::Show("Игра окончена!");
	}
	else if (!play && !die){
		timer->Stop();
		MessageBox::Show("Игра приостановлена!");
	}
}



