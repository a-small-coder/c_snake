#pragma once

namespace GameSnake2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pauseRepauseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ informationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBoxGameData;
	private: System::Windows::Forms::Label^ labelScore;

	private: System::Windows::Forms::GroupBox^ groupBoxSettings;
	private: System::Windows::Forms::Button^ buttonApplySpeed;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownSpeedSnake;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBoxUp;
	private: System::Windows::Forms::PictureBox^ pictureBoxLower;
	private: System::Windows::Forms::PictureBox^ pictureBoxRight;
	private: System::Windows::Forms::PictureBox^ pictureBoxLeft;
	private: System::Windows::Forms::Label^ labelCoordinates;

	private: System::Windows::Forms::Label^ labelGameOver;
	private: System::Windows::Forms::Timer^ timer;


	private: System::Windows::Forms::ToolStripMenuItem^ informationAboutGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pauseRepauseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informationAboutGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBoxGameData = (gcnew System::Windows::Forms::GroupBox());
			this->labelCoordinates = (gcnew System::Windows::Forms::Label());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettings = (gcnew System::Windows::Forms::GroupBox());
			this->buttonApplySpeed = (gcnew System::Windows::Forms::Button());
			this->numericUpDownSpeedSnake = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxUp = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxLower = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRight = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxLeft = (gcnew System::Windows::Forms::PictureBox());
			this->labelGameOver = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->groupBoxGameData->SuspendLayout();
			this->groupBoxSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedSnake))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLower))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLeft))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuToolStripMenuItem,
					this->informationToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(799, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newGameToolStripMenuItem,
					this->pauseRepauseToolStripMenuItem, this->settingsToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(191, 26);
			this->newGameToolStripMenuItem->Text = L"New game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::newGameToolStripMenuItem_Click);
			// 
			// pauseRepauseToolStripMenuItem
			// 
			this->pauseRepauseToolStripMenuItem->Name = L"pauseRepauseToolStripMenuItem";
			this->pauseRepauseToolStripMenuItem->Size = System::Drawing::Size(191, 26);
			this->pauseRepauseToolStripMenuItem->Text = L"Pause\\Repause";
			this->pauseRepauseToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::pauseRepauseToolStripMenuItem_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(191, 26);
			this->settingsToolStripMenuItem->Text = L"Settings";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::settingsToolStripMenuItem_Click);
			// 
			// informationToolStripMenuItem
			// 
			this->informationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->informationAboutGameToolStripMenuItem });
			this->informationToolStripMenuItem->Name = L"informationToolStripMenuItem";
			this->informationToolStripMenuItem->Size = System::Drawing::Size(101, 24);
			this->informationToolStripMenuItem->Text = L"Information";
			// 
			// informationAboutGameToolStripMenuItem
			// 
			this->informationAboutGameToolStripMenuItem->Name = L"informationAboutGameToolStripMenuItem";
			this->informationAboutGameToolStripMenuItem->Size = System::Drawing::Size(255, 26);
			this->informationAboutGameToolStripMenuItem->Text = L"information about game";
			this->informationAboutGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &GameForm::informationAboutGameToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem1 });
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(47, 24);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// exitToolStripMenuItem1
			// 
			this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(116, 26);
			this->exitToolStripMenuItem1->Text = L"Exit";
			this->exitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &GameForm::exitToolStripMenuItem1_Click);
			// 
			// groupBoxGameData
			// 
			this->groupBoxGameData->Controls->Add(this->labelCoordinates);
			this->groupBoxGameData->Controls->Add(this->labelScore);
			this->groupBoxGameData->Location = System::Drawing::Point(16, 33);
			this->groupBoxGameData->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxGameData->Name = L"groupBoxGameData";
			this->groupBoxGameData->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxGameData->Size = System::Drawing::Size(399, 76);
			this->groupBoxGameData->TabIndex = 1;
			this->groupBoxGameData->TabStop = false;
			this->groupBoxGameData->Text = L"Данные игры";
			// 
			// labelCoordinates
			// 
			this->labelCoordinates->AutoSize = true;
			this->labelCoordinates->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCoordinates->Location = System::Drawing::Point(139, 37);
			this->labelCoordinates->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCoordinates->Name = L"labelCoordinates";
			this->labelCoordinates->Size = System::Drawing::Size(233, 22);
			this->labelCoordinates->TabIndex = 3;
			this->labelCoordinates->Text = L"Coords: (x, y)";
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelScore->Location = System::Drawing::Point(8, 31);
			this->labelScore->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(118, 32);
			this->labelScore->TabIndex = 0;
			this->labelScore->Text = L"Points: 0";
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->Controls->Add(this->buttonApplySpeed);
			this->groupBoxSettings->Controls->Add(this->numericUpDownSpeedSnake);
			this->groupBoxSettings->Controls->Add(this->label2);
			this->groupBoxSettings->Location = System::Drawing::Point(167, 294);
			this->groupBoxSettings->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxSettings->Size = System::Drawing::Size(481, 102);
			this->groupBoxSettings->TabIndex = 2;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"Настройки";
			// 
			// buttonApplySpeed
			// 
			this->buttonApplySpeed->Location = System::Drawing::Point(197, 64);
			this->buttonApplySpeed->Margin = System::Windows::Forms::Padding(4);
			this->buttonApplySpeed->Name = L"buttonApplySpeed";
			this->buttonApplySpeed->Size = System::Drawing::Size(100, 28);
			this->buttonApplySpeed->TabIndex = 2;
			this->buttonApplySpeed->Text = L"Применить";
			this->buttonApplySpeed->UseVisualStyleBackColor = true;
			this->buttonApplySpeed->Click += gcnew System::EventHandler(this, &GameForm::ButtonApplySpeed_Click);
			// 
			// numericUpDownSpeedSnake
			// 
			this->numericUpDownSpeedSnake->Location = System::Drawing::Point(292, 34);
			this->numericUpDownSpeedSnake->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownSpeedSnake->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDownSpeedSnake->Name = L"numericUpDownSpeedSnake";
			this->numericUpDownSpeedSnake->Size = System::Drawing::Size(160, 22);
			this->numericUpDownSpeedSnake->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 33);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(256, 28);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Введите скорость змейки: ";
			// 
			// pictureBoxUp
			// 
			this->pictureBoxUp->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxUp->Location = System::Drawing::Point(0, 117);
			this->pictureBoxUp->Margin = System::Windows::Forms::Padding(4);
			this->pictureBoxUp->Name = L"pictureBoxUp";
			this->pictureBoxUp->Size = System::Drawing::Size(800, 12);
			this->pictureBoxUp->TabIndex = 3;
			this->pictureBoxUp->TabStop = false;
			// 
			// pictureBoxLower
			// 
			this->pictureBoxLower->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxLower->Location = System::Drawing::Point(0, 843);
			this->pictureBoxLower->Margin = System::Windows::Forms::Padding(4);
			this->pictureBoxLower->Name = L"pictureBoxLower";
			this->pictureBoxLower->Size = System::Drawing::Size(800, 12);
			this->pictureBoxLower->TabIndex = 4;
			this->pictureBoxLower->TabStop = false;
			// 
			// pictureBoxRight
			// 
			this->pictureBoxRight->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxRight->Location = System::Drawing::Point(787, 117);
			this->pictureBoxRight->Margin = System::Windows::Forms::Padding(4);
			this->pictureBoxRight->Name = L"pictureBoxRight";
			this->pictureBoxRight->Size = System::Drawing::Size(13, 738);
			this->pictureBoxRight->TabIndex = 5;
			this->pictureBoxRight->TabStop = false;
			// 
			// pictureBoxLeft
			// 
			this->pictureBoxLeft->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxLeft->Location = System::Drawing::Point(0, 117);
			this->pictureBoxLeft->Margin = System::Windows::Forms::Padding(4);
			this->pictureBoxLeft->Name = L"pictureBoxLeft";
			this->pictureBoxLeft->Size = System::Drawing::Size(13, 738);
			this->pictureBoxLeft->TabIndex = 6;
			this->pictureBoxLeft->TabStop = false;
			// 
			// labelGameOver
			// 
			this->labelGameOver->AutoSize = true;
			this->labelGameOver->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelGameOver->Location = System::Drawing::Point(271, 190);
			this->labelGameOver->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelGameOver->Name = L"labelGameOver";
			this->labelGameOver->Size = System::Drawing::Size(253, 46);
			this->labelGameOver->TabIndex = 7;
			this->labelGameOver->Text = L"Game Over!!!";
			this->labelGameOver->Visible = false;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &GameForm::GameForm_Update);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 857);
			this->Controls->Add(this->labelGameOver);
			this->Controls->Add(this->pictureBoxLeft);
			this->Controls->Add(this->pictureBoxRight);
			this->Controls->Add(this->pictureBoxLower);
			this->Controls->Add(this->pictureBoxUp);
			this->Controls->Add(this->groupBoxSettings);
			this->Controls->Add(this->groupBoxGameData);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"GameForm";
			this->Text = L"GameForm";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GameForm::GameForm_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxGameData->ResumeLayout(false);
			this->groupBoxGameData->PerformLayout();
			this->groupBoxSettings->ResumeLayout(false);
			this->groupBoxSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedSnake))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLower))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLeft))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: PictureBox^ fruit;
		private: array<PictureBox^>^ Serpens;
		private: bool play;
		private: bool die;
		private: bool firstLaunch;
		private: int step = 10;
		private: float updateInrerval = 100;
		private: int score = 0;

		// Действия игры
		private: void GeneratePositionFruit();
		private: void Eating();
		private: void Movement();
		private: void EatYourself();
		private: void GameOver();
		private: void NewGame();
		private: void CheckBorders();

		// Определение событий игры
		private: System::Void ButtonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void newGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void pauseRepauseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void settingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void informationAboutGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void exitToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void GameForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		private: System::Void GameForm_Update(System::Object^ sender, System::EventArgs^ e);

};
}
