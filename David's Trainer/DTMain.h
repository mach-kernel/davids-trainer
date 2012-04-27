#include <Windows.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <ShellAPI.h>
#include <math.h>
#include <sstream>
#include <string>

#using <System.dll>

// Char Base
#define CharBase 0x00C68754
#define OFS_X 0x4680
#define OFS_Y 0x4684
#define OFS_TTOG 0x3B24
#define OFS_TX 0x3B2C
#define OFS_TY 0x3B30
#define OFS_ATKCT 0x3BAC
#define OFS_BRTH 0x063C
#define OFS_ATKCB 0x4790

// Mob Base
#define MobBase 0x00C687B8
#define OFS_MOBCT 0x0010
#define OFS_MO1 0x0028
#define OFS_MOD 0x0428
#define OFS_MO21 0x00FE
#define OFS_MO22 0x0014
#define OFS_MO2 0x0004
#define OFS_MO3 0x04E8
#define OFS_MO4 0x0044
#define OFS_MO5 0x0028
#define OFS_MO6 0x001C
#define OFS_MO7 0x0028
#define OFS_MOX 0x0060
#define OFS_MOY 0x0064

// GUI Base
#define GUIBase 0x00C68AC8
#define OFS_HP 0x1818
#define OFS_MP 0x181C
#define OFS_EXP 0x1758

// Alert Base
#define AlrtBase 0x00C687AC
#define OFS_HPA 0x0088
#define OFS_MPA 0x008C

// Minimap Base
#define MiniMapBase 0x00C68E40
#define OFS_NPCCT 0x0B6C
#define OFS_MAPID 0x0C84

// Item Base
#define ItemBase 0x00C6AC58
#define OFS_ITMCT 0x0014

// Portal Base
#define PortalBase 0x00C6AD54
#define OFS_PRTCT 0x0018

// Random Base
#define RandBase 0x00C64068
#define OFS_WORLD 0x205C
#define OFS_CHAN 0x2060

// Get EXP
#define lpdwStatBase 0x00C68AC8
#define StatEXPOff 0x1758


#pragma once

using namespace System;
using namespace std;
using namespace System::Threading;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;

namespace DavidsTrainer {

	/// <summary>
	/// Summary for DTMain
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class DTMain : public System::Windows::Forms::Form
	{
	public:
		DTMain(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DTMain()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage5;



	private: System::Windows::Forms::CheckBox^  checkUA;
	private: System::Windows::Forms::CheckBox^  checkNBreath;
	private: System::Windows::Forms::CheckBox^  checkMobkb;



	private: System::Windows::Forms::CheckBox^  checkNokbme;
	private: System::Windows::Forms::CheckBox^  checkTubi;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::CheckBox^  blinkGod;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::CheckBox^  sitHack;
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabControl^  tabUI;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  textX;
	private: System::Windows::Forms::Label^  textY;
	private: System::Windows::Forms::CheckBox^  checkFGM;
	private: System::Windows::Forms::CheckBox^  checkMGM;
	private: System::Windows::Forms::CheckBox^  rfVac;
	private: System::Windows::Forms::CheckBox^  lfVac;
	private: System::Windows::Forms::CheckBox^  rpVac;
	private: System::Windows::Forms::CheckBox^  lpVac;
	private: System::Windows::Forms::CheckBox^  lfMVac;



	private: System::Windows::Forms::Button^  killBT;
	private: System::Windows::Forms::CheckBox^  autoLoot;
	private: System::Windows::Forms::TextBox^  lootMS;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  atkMS;
	private: System::Windows::Forms::CheckBox^  autoATK;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Timer^  statsTimer;
	private: System::Windows::Forms::Label^  hpText;
	private: System::Windows::Forms::Label^  mpText;



	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  expText;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  itemText;

	private: System::Windows::Forms::Label^  mobText;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  atkText;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  npcText;

	private: System::Windows::Forms::Label^  portalText;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Timer^  lootTimer;
	private: System::Windows::Forms::Timer^  attackTimer;
	private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::TextBox^  mpPotVal;

	private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  hpPotVal;

private: System::Windows::Forms::CheckBox^  autoPot;




private: System::Windows::Forms::Label^  textChannel;

private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  textMapID;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  textBreath;

private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  textCombo;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::CheckBox^  checkPIC;




private: System::Windows::Forms::Timer^  potTimer;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Label^  potHP;
private: System::Windows::Forms::Label^  potMP;
private: System::Windows::Forms::Label^  offmp;
private: System::Windows::Forms::Label^  offhp;
private: System::Windows::Forms::Label^  textMobY;

private: System::Windows::Forms::Label^  textmobX;

private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::CheckBox^  mapSpeed;
private: System::Windows::Forms::CheckBox^  csDark;
private: System::Windows::Forms::TextBox^  textBox1;

private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::CheckBox^  checkEF;
private: System::Windows::Forms::TabPage^  tabPage9;

private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Timer^  intelliKami;





private: System::Windows::Forms::TextBox^  kamiDel;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::TextBox^  forceDelay;

private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Timer^  intelliForce;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::CheckBox^  checkpermS;
private: System::Windows::Forms::CheckBox^  checkiKam;
private: System::Windows::Forms::CheckBox^  checkiForce;













	private: System::ComponentModel::IContainer^  components;









	protected: 

	protected: 


























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DTMain::typeid));
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->offmp = (gcnew System::Windows::Forms::Label());
			this->offhp = (gcnew System::Windows::Forms::Label());
			this->potMP = (gcnew System::Windows::Forms::Label());
			this->potHP = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->mpPotVal = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->hpPotVal = (gcnew System::Windows::Forms::TextBox());
			this->autoPot = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->atkMS = (gcnew System::Windows::Forms::TextBox());
			this->autoATK = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lootMS = (gcnew System::Windows::Forms::TextBox());
			this->autoLoot = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->checkUA = (gcnew System::Windows::Forms::CheckBox());
			this->checkNBreath = (gcnew System::Windows::Forms::CheckBox());
			this->checkMobkb = (gcnew System::Windows::Forms::CheckBox());
			this->checkNokbme = (gcnew System::Windows::Forms::CheckBox());
			this->checkTubi = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->checkMGM = (gcnew System::Windows::Forms::CheckBox());
			this->checkFGM = (gcnew System::Windows::Forms::CheckBox());
			this->blinkGod = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->lfMVac = (gcnew System::Windows::Forms::CheckBox());
			this->rfVac = (gcnew System::Windows::Forms::CheckBox());
			this->lfVac = (gcnew System::Windows::Forms::CheckBox());
			this->rpVac = (gcnew System::Windows::Forms::CheckBox());
			this->lpVac = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->checkiForce = (gcnew System::Windows::Forms::CheckBox());
			this->checkiKam = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->forceDelay = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->kamiDel = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkpermS = (gcnew System::Windows::Forms::CheckBox());
			this->checkEF = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->csDark = (gcnew System::Windows::Forms::CheckBox());
			this->mapSpeed = (gcnew System::Windows::Forms::CheckBox());
			this->checkPIC = (gcnew System::Windows::Forms::CheckBox());
			this->sitHack = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textMobY = (gcnew System::Windows::Forms::Label());
			this->textmobX = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textCombo = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBreath = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textMapID = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textChannel = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->npcText = (gcnew System::Windows::Forms::Label());
			this->portalText = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->itemText = (gcnew System::Windows::Forms::Label());
			this->mobText = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->atkText = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->expText = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->hpText = (gcnew System::Windows::Forms::Label());
			this->mpText = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textY = (gcnew System::Windows::Forms::Label());
			this->textX = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabUI = (gcnew System::Windows::Forms::TabControl());
			this->killBT = (gcnew System::Windows::Forms::Button());
			this->statsTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lootTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->attackTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->potTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->intelliKami = (gcnew System::Windows::Forms::Timer(this->components));
			this->intelliForce = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabPage3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabUI->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Black;
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Controls->Add(this->offmp);
			this->tabPage3->Controls->Add(this->offhp);
			this->tabPage3->Controls->Add(this->potMP);
			this->tabPage3->Controls->Add(this->potHP);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->mpPotVal);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->hpPotVal);
			this->tabPage3->Controls->Add(this->autoPot);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->atkMS);
			this->tabPage3->Controls->Add(this->autoATK);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->lootMS);
			this->tabPage3->Controls->Add(this->autoLoot);
			this->tabPage3->Location = System::Drawing::Point(4, 23);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(515, 169);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Automation";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 6));
			this->textBox1->ForeColor = System::Drawing::Color::Lime;
			this->textBox1->Location = System::Drawing::Point(13, 134);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(82, 21);
			this->textBox1->TabIndex = 16;
			this->textBox1->Text = L"HP: Home\r\nMP: End";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// offmp
			// 
			this->offmp->AutoSize = true;
			this->offmp->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->offmp->ForeColor = System::Drawing::Color::Red;
			this->offmp->Location = System::Drawing::Point(255, 127);
			this->offmp->Name = L"offmp";
			this->offmp->Size = System::Drawing::Size(40, 11);
			this->offmp->TabIndex = 15;
			this->offmp->Text = L"(off)";
			this->offmp->Visible = false;
			// 
			// offhp
			// 
			this->offhp->AutoSize = true;
			this->offhp->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->offhp->ForeColor = System::Drawing::Color::Red;
			this->offhp->Location = System::Drawing::Point(255, 104);
			this->offhp->Name = L"offhp";
			this->offhp->Size = System::Drawing::Size(40, 11);
			this->offhp->TabIndex = 14;
			this->offhp->Text = L"(off)";
			this->offhp->Visible = false;
			// 
			// potMP
			// 
			this->potMP->AutoSize = true;
			this->potMP->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->potMP->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->potMP->Location = System::Drawing::Point(210, 128);
			this->potMP->Name = L"potMP";
			this->potMP->Size = System::Drawing::Size(12, 11);
			this->potMP->TabIndex = 13;
			this->potMP->Text = L"0";
			// 
			// potHP
			// 
			this->potHP->AutoSize = true;
			this->potHP->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->potHP->ForeColor = System::Drawing::Color::Red;
			this->potHP->Location = System::Drawing::Point(210, 104);
			this->potHP->Name = L"potHP";
			this->potHP->Size = System::Drawing::Size(12, 11);
			this->potHP->TabIndex = 12;
			this->potHP->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(301, 11);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(206, 132);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = resources->GetString(L"textBox3.Text");
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(98, 127);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 14);
			this->label13->TabIndex = 10;
			this->label13->Text = L"MP:";
			// 
			// mpPotVal
			// 
			this->mpPotVal->BackColor = System::Drawing::Color::Black;
			this->mpPotVal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mpPotVal->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mpPotVal->ForeColor = System::Drawing::Color::White;
			this->mpPotVal->Location = System::Drawing::Point(135, 125);
			this->mpPotVal->Name = L"mpPotVal";
			this->mpPotVal->Size = System::Drawing::Size(60, 18);
			this->mpPotVal->TabIndex = 9;
			this->mpPotVal->Text = L"100";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(98, 103);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 14);
			this->label8->TabIndex = 8;
			this->label8->Text = L"HP:";
			// 
			// hpPotVal
			// 
			this->hpPotVal->BackColor = System::Drawing::Color::Black;
			this->hpPotVal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->hpPotVal->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->hpPotVal->ForeColor = System::Drawing::Color::White;
			this->hpPotVal->Location = System::Drawing::Point(135, 101);
			this->hpPotVal->Name = L"hpPotVal";
			this->hpPotVal->Size = System::Drawing::Size(60, 18);
			this->hpPotVal->TabIndex = 7;
			this->hpPotVal->Text = L"100";
			// 
			// autoPot
			// 
			this->autoPot->AutoSize = true;
			this->autoPot->BackColor = System::Drawing::Color::Black;
			this->autoPot->ForeColor = System::Drawing::Color::White;
			this->autoPot->Location = System::Drawing::Point(8, 112);
			this->autoPot->Name = L"autoPot";
			this->autoPot->Size = System::Drawing::Size(90, 18);
			this->autoPot->TabIndex = 6;
			this->autoPot->Text = L"Auto Pot";
			this->autoPot->UseVisualStyleBackColor = false;
			this->autoPot->CheckedChanged += gcnew System::EventHandler(this, &DTMain::autoPot_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(5, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 14);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Delay:";
			// 
			// atkMS
			// 
			this->atkMS->BackColor = System::Drawing::Color::Black;
			this->atkMS->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->atkMS->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->atkMS->ForeColor = System::Drawing::Color::White;
			this->atkMS->Location = System::Drawing::Point(60, 72);
			this->atkMS->Name = L"atkMS";
			this->atkMS->Size = System::Drawing::Size(100, 18);
			this->atkMS->TabIndex = 4;
			this->atkMS->Text = L"100";
			// 
			// autoATK
			// 
			this->autoATK->AutoSize = true;
			this->autoATK->BackColor = System::Drawing::Color::Black;
			this->autoATK->ForeColor = System::Drawing::Color::White;
			this->autoATK->Location = System::Drawing::Point(8, 53);
			this->autoATK->Name = L"autoATK";
			this->autoATK->Size = System::Drawing::Size(114, 18);
			this->autoATK->TabIndex = 3;
			this->autoATK->Text = L"Auto Attack";
			this->autoATK->UseVisualStyleBackColor = false;
			this->autoATK->CheckedChanged += gcnew System::EventHandler(this, &DTMain::autoATK_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(5, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 14);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Delay:";
			// 
			// lootMS
			// 
			this->lootMS->BackColor = System::Drawing::Color::Black;
			this->lootMS->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lootMS->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lootMS->ForeColor = System::Drawing::Color::White;
			this->lootMS->Location = System::Drawing::Point(60, 23);
			this->lootMS->Name = L"lootMS";
			this->lootMS->Size = System::Drawing::Size(100, 18);
			this->lootMS->TabIndex = 1;
			this->lootMS->Text = L"100";
			// 
			// autoLoot
			// 
			this->autoLoot->AutoSize = true;
			this->autoLoot->BackColor = System::Drawing::Color::Black;
			this->autoLoot->ForeColor = System::Drawing::Color::White;
			this->autoLoot->Location = System::Drawing::Point(8, 4);
			this->autoLoot->Name = L"autoLoot";
			this->autoLoot->Size = System::Drawing::Size(98, 18);
			this->autoLoot->TabIndex = 0;
			this->autoLoot->Text = L"Auto Loot";
			this->autoLoot->UseVisualStyleBackColor = false;
			this->autoLoot->CheckedChanged += gcnew System::EventHandler(this, &DTMain::autoLoot_CheckedChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Black;
			this->tabPage2->Controls->Add(this->tabControl1);
			this->tabPage2->Location = System::Drawing::Point(4, 23);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(515, 169);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Memory Hacks";
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->ItemSize = System::Drawing::Size(76, 16);
			this->tabControl1->Location = System::Drawing::Point(-5, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(523, 156);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::Black;
			this->tabPage5->Controls->Add(this->checkUA);
			this->tabPage5->Controls->Add(this->checkNBreath);
			this->tabPage5->Controls->Add(this->checkMobkb);
			this->tabPage5->Controls->Add(this->checkNokbme);
			this->tabPage5->Controls->Add(this->checkTubi);
			this->tabPage5->Location = System::Drawing::Point(4, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(515, 132);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Common";
			// 
			// checkUA
			// 
			this->checkUA->AutoSize = true;
			this->checkUA->ForeColor = System::Drawing::Color::White;
			this->checkUA->Location = System::Drawing::Point(9, 91);
			this->checkUA->Name = L"checkUA";
			this->checkUA->Size = System::Drawing::Size(38, 15);
			this->checkUA->TabIndex = 4;
			this->checkUA->Text = L"UA";
			this->checkUA->UseVisualStyleBackColor = true;
			this->checkUA->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkUA_CheckedChanged);
			// 
			// checkNBreath
			// 
			this->checkNBreath->AutoSize = true;
			this->checkNBreath->ForeColor = System::Drawing::Color::White;
			this->checkNBreath->Location = System::Drawing::Point(9, 70);
			this->checkNBreath->Name = L"checkNBreath";
			this->checkNBreath->Size = System::Drawing::Size(87, 15);
			this->checkNBreath->TabIndex = 3;
			this->checkNBreath->Text = L"No Breath";
			this->checkNBreath->UseVisualStyleBackColor = true;
			this->checkNBreath->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkNBreath_CheckedChanged);
			// 
			// checkMobkb
			// 
			this->checkMobkb->AutoSize = true;
			this->checkMobkb->ForeColor = System::Drawing::Color::White;
			this->checkMobkb->Location = System::Drawing::Point(9, 49);
			this->checkMobkb->Name = L"checkMobkb";
			this->checkMobkb->Size = System::Drawing::Size(94, 15);
			this->checkMobkb->TabIndex = 2;
			this->checkMobkb->Text = L"All Mob KB";
			this->checkMobkb->UseVisualStyleBackColor = true;
			this->checkMobkb->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkMobkb_CheckedChanged);
			// 
			// checkNokbme
			// 
			this->checkNokbme->AutoSize = true;
			this->checkNokbme->ForeColor = System::Drawing::Color::White;
			this->checkNokbme->Location = System::Drawing::Point(9, 28);
			this->checkNokbme->Name = L"checkNokbme";
			this->checkNokbme->Size = System::Drawing::Size(122, 15);
			this->checkNokbme->TabIndex = 1;
			this->checkNokbme->Text = L"No KB (Player)";
			this->checkNokbme->UseVisualStyleBackColor = true;
			this->checkNokbme->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkNokbme_CheckedChanged);
			// 
			// checkTubi
			// 
			this->checkTubi->AutoSize = true;
			this->checkTubi->ForeColor = System::Drawing::Color::White;
			this->checkTubi->Location = System::Drawing::Point(9, 7);
			this->checkTubi->Name = L"checkTubi";
			this->checkTubi->Size = System::Drawing::Size(87, 15);
			this->checkTubi->TabIndex = 0;
			this->checkTubi->Text = L"Uber Tubi";
			this->checkTubi->UseVisualStyleBackColor = true;
			this->checkTubi->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkTubi_CheckedChanged);
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::Color::Black;
			this->tabPage6->Controls->Add(this->checkMGM);
			this->tabPage6->Controls->Add(this->checkFGM);
			this->tabPage6->Controls->Add(this->blinkGod);
			this->tabPage6->Location = System::Drawing::Point(4, 4);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(515, 132);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Godmodes";
			// 
			// checkMGM
			// 
			this->checkMGM->AutoSize = true;
			this->checkMGM->ForeColor = System::Drawing::Color::White;
			this->checkMGM->Location = System::Drawing::Point(9, 49);
			this->checkMGM->Name = L"checkMGM";
			this->checkMGM->Size = System::Drawing::Size(115, 15);
			this->checkMGM->TabIndex = 2;
			this->checkMGM->Text = L"Miss God Mode";
			this->checkMGM->UseVisualStyleBackColor = true;
			this->checkMGM->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkMGM_CheckedChanged);
			// 
			// checkFGM
			// 
			this->checkFGM->AutoSize = true;
			this->checkFGM->ForeColor = System::Drawing::Color::White;
			this->checkFGM->Location = System::Drawing::Point(9, 7);
			this->checkFGM->Name = L"checkFGM";
			this->checkFGM->Size = System::Drawing::Size(115, 15);
			this->checkFGM->TabIndex = 1;
			this->checkFGM->Text = L"Full God Mode";
			this->checkFGM->UseVisualStyleBackColor = true;
			this->checkFGM->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkFGM_CheckedChanged);
			// 
			// blinkGod
			// 
			this->blinkGod->AutoSize = true;
			this->blinkGod->ForeColor = System::Drawing::Color::White;
			this->blinkGod->Location = System::Drawing::Point(9, 28);
			this->blinkGod->Name = L"blinkGod";
			this->blinkGod->Size = System::Drawing::Size(122, 15);
			this->blinkGod->TabIndex = 0;
			this->blinkGod->Text = L"Blink God Mode";
			this->blinkGod->UseVisualStyleBackColor = true;
			this->blinkGod->CheckedChanged += gcnew System::EventHandler(this, &DTMain::blinkGod_CheckedChanged);
			// 
			// tabPage7
			// 
			this->tabPage7->BackColor = System::Drawing::Color::Black;
			this->tabPage7->Controls->Add(this->lfMVac);
			this->tabPage7->Controls->Add(this->rfVac);
			this->tabPage7->Controls->Add(this->lfVac);
			this->tabPage7->Controls->Add(this->rpVac);
			this->tabPage7->Controls->Add(this->lpVac);
			this->tabPage7->Location = System::Drawing::Point(4, 4);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(515, 132);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"Vacs";
			// 
			// lfMVac
			// 
			this->lfMVac->AutoSize = true;
			this->lfMVac->ForeColor = System::Drawing::Color::White;
			this->lfMVac->Location = System::Drawing::Point(9, 70);
			this->lfMVac->Name = L"lfMVac";
			this->lfMVac->Size = System::Drawing::Size(199, 15);
			this->lfMVac->TabIndex = 6;
			this->lfMVac->Text = L"Left Force Vac (Mob Only)";
			this->lfMVac->UseVisualStyleBackColor = true;
			this->lfMVac->CheckedChanged += gcnew System::EventHandler(this, &DTMain::lfMVac_CheckedChanged);
			// 
			// rfVac
			// 
			this->rfVac->AutoSize = true;
			this->rfVac->ForeColor = System::Drawing::Color::White;
			this->rfVac->Location = System::Drawing::Point(9, 91);
			this->rfVac->Name = L"rfVac";
			this->rfVac->Size = System::Drawing::Size(129, 15);
			this->rfVac->TabIndex = 5;
			this->rfVac->Text = L"Right Force Vac";
			this->rfVac->UseVisualStyleBackColor = true;
			this->rfVac->CheckedChanged += gcnew System::EventHandler(this, &DTMain::rfVac_CheckedChanged);
			// 
			// lfVac
			// 
			this->lfVac->AutoSize = true;
			this->lfVac->ForeColor = System::Drawing::Color::White;
			this->lfVac->Location = System::Drawing::Point(9, 49);
			this->lfVac->Name = L"lfVac";
			this->lfVac->Size = System::Drawing::Size(122, 15);
			this->lfVac->TabIndex = 4;
			this->lfVac->Text = L"Left Force Vac";
			this->lfVac->UseVisualStyleBackColor = true;
			this->lfVac->CheckedChanged += gcnew System::EventHandler(this, &DTMain::lfVac_CheckedChanged);
			// 
			// rpVac
			// 
			this->rpVac->AutoSize = true;
			this->rpVac->ForeColor = System::Drawing::Color::White;
			this->rpVac->Location = System::Drawing::Point(9, 28);
			this->rpVac->Name = L"rpVac";
			this->rpVac->Size = System::Drawing::Size(122, 15);
			this->rpVac->TabIndex = 3;
			this->rpVac->Text = L"Right Push Vac";
			this->rpVac->UseVisualStyleBackColor = true;
			this->rpVac->CheckedChanged += gcnew System::EventHandler(this, &DTMain::rpVac_CheckedChanged);
			// 
			// lpVac
			// 
			this->lpVac->AutoSize = true;
			this->lpVac->ForeColor = System::Drawing::Color::White;
			this->lpVac->Location = System::Drawing::Point(9, 7);
			this->lpVac->Name = L"lpVac";
			this->lpVac->Size = System::Drawing::Size(115, 15);
			this->lpVac->TabIndex = 2;
			this->lpVac->Text = L"Left Push Vac";
			this->lpVac->UseVisualStyleBackColor = true;
			this->lpVac->CheckedChanged += gcnew System::EventHandler(this, &DTMain::lpVac_CheckedChanged);
			// 
			// tabPage9
			// 
			this->tabPage9->BackColor = System::Drawing::Color::Black;
			this->tabPage9->Controls->Add(this->checkiForce);
			this->tabPage9->Controls->Add(this->checkiKam);
			this->tabPage9->Controls->Add(this->textBox2);
			this->tabPage9->Controls->Add(this->groupBox3);
			this->tabPage9->Controls->Add(this->groupBox2);
			this->tabPage9->Location = System::Drawing::Point(4, 4);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(515, 132);
			this->tabPage9->TabIndex = 5;
			this->tabPage9->Text = L"IntelliVac™";
			// 
			// checkiForce
			// 
			this->checkiForce->AutoSize = true;
			this->checkiForce->ForeColor = System::Drawing::Color::White;
			this->checkiForce->Location = System::Drawing::Point(470, 7);
			this->checkiForce->Name = L"checkiForce";
			this->checkiForce->Size = System::Drawing::Size(38, 15);
			this->checkiForce->TabIndex = 15;
			this->checkiForce->Text = L"On";
			this->checkiForce->UseVisualStyleBackColor = true;
			this->checkiForce->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkiForce_CheckedChanged);
			// 
			// checkiKam
			// 
			this->checkiKam->AutoSize = true;
			this->checkiKam->ForeColor = System::Drawing::Color::White;
			this->checkiKam->Location = System::Drawing::Point(9, 7);
			this->checkiKam->Name = L"checkiKam";
			this->checkiKam->Size = System::Drawing::Size(38, 15);
			this->checkiKam->TabIndex = 14;
			this->checkiKam->Text = L"On";
			this->checkiKam->UseVisualStyleBackColor = true;
			this->checkiKam->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkiKam_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(10, 73);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(494, 53);
			this->textBox2->TabIndex = 13;
			this->textBox2->Text = L"Delay values are in milliseconds.\r\n\r\nRecommended usage is once every 30,000ms on " 
				L"both; for continuous flow (Kami only) use 1 ms. Longer intervals = safer!";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->forceDelay);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(260, 25);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(248, 42);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Force";
			// 
			// forceDelay
			// 
			this->forceDelay->BackColor = System::Drawing::Color::Black;
			this->forceDelay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->forceDelay->ForeColor = System::Drawing::Color::White;
			this->forceDelay->Location = System::Drawing::Point(124, 15);
			this->forceDelay->Name = L"forceDelay";
			this->forceDelay->Size = System::Drawing::Size(118, 18);
			this->forceDelay->TabIndex = 3;
			this->forceDelay->Text = L"100";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(9, 17);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(111, 13);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Enable every:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->kamiDel);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(6, 25);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(248, 42);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Kami";
			// 
			// kamiDel
			// 
			this->kamiDel->BackColor = System::Drawing::Color::Black;
			this->kamiDel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->kamiDel->ForeColor = System::Drawing::Color::White;
			this->kamiDel->Location = System::Drawing::Point(122, 14);
			this->kamiDel->Name = L"kamiDel";
			this->kamiDel->Size = System::Drawing::Size(118, 18);
			this->kamiDel->TabIndex = 1;
			this->kamiDel->Text = L"100";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(7, 16);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(111, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Enable every:";
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::Black;
			this->tabPage4->Controls->Add(this->groupBox4);
			this->tabPage4->Location = System::Drawing::Point(4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(515, 132);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"Skills";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkpermS);
			this->groupBox4->Controls->Add(this->checkEF);
			this->groupBox4->ForeColor = System::Drawing::Color::White;
			this->groupBox4->Location = System::Drawing::Point(9, 7);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(185, 68);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Mechanics";
			// 
			// checkpermS
			// 
			this->checkpermS->AutoSize = true;
			this->checkpermS->ForeColor = System::Drawing::Color::White;
			this->checkpermS->Location = System::Drawing::Point(6, 38);
			this->checkpermS->Name = L"checkpermS";
			this->checkpermS->Size = System::Drawing::Size(164, 15);
			this->checkpermS->TabIndex = 5;
			this->checkpermS->Text = L"Permanent Siege Mode";
			this->checkpermS->UseVisualStyleBackColor = true;
			this->checkpermS->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkpermS_CheckedChanged);
			// 
			// checkEF
			// 
			this->checkEF->AutoSize = true;
			this->checkEF->ForeColor = System::Drawing::Color::White;
			this->checkEF->Location = System::Drawing::Point(6, 17);
			this->checkEF->Name = L"checkEF";
			this->checkEF->Size = System::Drawing::Size(164, 15);
			this->checkEF->TabIndex = 4;
			this->checkEF->Text = L"Endless Flamethrower";
			this->checkEF->UseVisualStyleBackColor = true;
			this->checkEF->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkEF_CheckedChanged);
			// 
			// tabPage8
			// 
			this->tabPage8->BackColor = System::Drawing::Color::Black;
			this->tabPage8->Controls->Add(this->csDark);
			this->tabPage8->Controls->Add(this->mapSpeed);
			this->tabPage8->Controls->Add(this->checkPIC);
			this->tabPage8->Controls->Add(this->sitHack);
			this->tabPage8->Location = System::Drawing::Point(4, 4);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(515, 132);
			this->tabPage8->TabIndex = 3;
			this->tabPage8->Text = L"Misc";
			// 
			// csDark
			// 
			this->csDark->AutoSize = true;
			this->csDark->ForeColor = System::Drawing::Color::White;
			this->csDark->Location = System::Drawing::Point(9, 70);
			this->csDark->Name = L"csDark";
			this->csDark->Size = System::Drawing::Size(115, 15);
			this->csDark->TabIndex = 3;
			this->csDark->Text = L"CS Dark Sight";
			this->csDark->UseVisualStyleBackColor = true;
			this->csDark->CheckedChanged += gcnew System::EventHandler(this, &DTMain::csDark_CheckedChanged);
			// 
			// mapSpeed
			// 
			this->mapSpeed->AutoSize = true;
			this->mapSpeed->ForeColor = System::Drawing::Color::White;
			this->mapSpeed->Location = System::Drawing::Point(9, 49);
			this->mapSpeed->Name = L"mapSpeed";
			this->mapSpeed->Size = System::Drawing::Size(108, 15);
			this->mapSpeed->TabIndex = 2;
			this->mapSpeed->Text = L"Speed up map";
			this->mapSpeed->UseVisualStyleBackColor = true;
			this->mapSpeed->CheckedChanged += gcnew System::EventHandler(this, &DTMain::mapSpeed_CheckedChanged);
			// 
			// checkPIC
			// 
			this->checkPIC->AutoSize = true;
			this->checkPIC->ForeColor = System::Drawing::Color::White;
			this->checkPIC->Location = System::Drawing::Point(9, 28);
			this->checkPIC->Name = L"checkPIC";
			this->checkPIC->Size = System::Drawing::Size(80, 15);
			this->checkPIC->TabIndex = 1;
			this->checkPIC->Text = L"Show PIC";
			this->checkPIC->UseVisualStyleBackColor = true;
			this->checkPIC->CheckedChanged += gcnew System::EventHandler(this, &DTMain::checkPIC_CheckedChanged);
			// 
			// sitHack
			// 
			this->sitHack->AutoSize = true;
			this->sitHack->ForeColor = System::Drawing::Color::White;
			this->sitHack->Location = System::Drawing::Point(9, 7);
			this->sitHack->Name = L"sitHack";
			this->sitHack->Size = System::Drawing::Size(80, 15);
			this->sitHack->TabIndex = 0;
			this->sitHack->Text = L"Sit Hack";
			this->sitHack->UseVisualStyleBackColor = true;
			this->sitHack->CheckedChanged += gcnew System::EventHandler(this, &DTMain::sitHack_CheckedChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Black;
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->linkLabel1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 23);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(515, 169);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Launchpad";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textMobY);
			this->groupBox1->Controls->Add(this->textmobX);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->textCombo);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->textBreath);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->textMapID);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->textChannel);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->npcText);
			this->groupBox1->Controls->Add(this->portalText);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->itemText);
			this->groupBox1->Controls->Add(this->mobText);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->atkText);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->expText);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->hpText);
			this->groupBox1->Controls->Add(this->mpText);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textY);
			this->groupBox1->Controls->Add(this->textX);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(9, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox1->Size = System::Drawing::Size(497, 93);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Stats \'n Stuff";
			// 
			// textMobY
			// 
			this->textMobY->AutoSize = true;
			this->textMobY->ForeColor = System::Drawing::Color::Coral;
			this->textMobY->Location = System::Drawing::Point(294, 47);
			this->textMobY->Name = L"textMobY";
			this->textMobY->Size = System::Drawing::Size(12, 11);
			this->textMobY->TabIndex = 33;
			this->textMobY->Text = L"0";
			// 
			// textmobX
			// 
			this->textmobX->AutoSize = true;
			this->textmobX->ForeColor = System::Drawing::Color::Coral;
			this->textmobX->Location = System::Drawing::Point(294, 34);
			this->textmobX->Name = L"textmobX";
			this->textmobX->Size = System::Drawing::Size(12, 11);
			this->textmobX->TabIndex = 32;
			this->textmobX->Text = L"0";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::Silver;
			this->label24->Location = System::Drawing::Point(241, 47);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(47, 11);
			this->label24->TabIndex = 31;
			this->label24->Text = L"Mob Y:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::Color::Silver;
			this->label25->Location = System::Drawing::Point(241, 34);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(47, 11);
			this->label25->TabIndex = 30;
			this->label25->Text = L"Mob X:";
			// 
			// textCombo
			// 
			this->textCombo->AutoSize = true;
			this->textCombo->ForeColor = System::Drawing::Color::Coral;
			this->textCombo->Location = System::Drawing::Point(197, 56);
			this->textCombo->Name = L"textCombo";
			this->textCombo->Size = System::Drawing::Size(12, 11);
			this->textCombo->TabIndex = 29;
			this->textCombo->Text = L"0";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::Silver;
			this->label23->Location = System::Drawing::Point(106, 56);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(89, 11);
			this->label23->TabIndex = 28;
			this->label23->Text = L"Combo Count:";
			// 
			// textBreath
			// 
			this->textBreath->AutoSize = true;
			this->textBreath->ForeColor = System::Drawing::Color::Coral;
			this->textBreath->Location = System::Drawing::Point(197, 69);
			this->textBreath->Name = L"textBreath";
			this->textBreath->Size = System::Drawing::Size(12, 11);
			this->textBreath->TabIndex = 27;
			this->textBreath->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::Color::Silver;
			this->label22->Location = System::Drawing::Point(106, 69);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(54, 11);
			this->label22->TabIndex = 26;
			this->label22->Text = L"Breath:";
			// 
			// textMapID
			// 
			this->textMapID->AutoSize = true;
			this->textMapID->ForeColor = System::Drawing::Color::Coral;
			this->textMapID->Location = System::Drawing::Point(428, 38);
			this->textMapID->Name = L"textMapID";
			this->textMapID->Size = System::Drawing::Size(12, 11);
			this->textMapID->TabIndex = 25;
			this->textMapID->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::Silver;
			this->label20->Location = System::Drawing::Point(376, 38);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(54, 11);
			this->label20->TabIndex = 24;
			this->label20->Text = L"Map ID:";
			// 
			// textChannel
			// 
			this->textChannel->AutoSize = true;
			this->textChannel->ForeColor = System::Drawing::Color::Coral;
			this->textChannel->Location = System::Drawing::Point(428, 25);
			this->textChannel->Name = L"textChannel";
			this->textChannel->Size = System::Drawing::Size(12, 11);
			this->textChannel->TabIndex = 23;
			this->textChannel->Text = L"0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::Silver;
			this->label21->Location = System::Drawing::Point(348, 25);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(82, 11);
			this->label21->TabIndex = 22;
			this->label21->Text = L"Channel No:";
			// 
			// npcText
			// 
			this->npcText->AutoSize = true;
			this->npcText->ForeColor = System::Drawing::Color::Coral;
			this->npcText->Location = System::Drawing::Point(428, 64);
			this->npcText->Name = L"npcText";
			this->npcText->Size = System::Drawing::Size(12, 11);
			this->npcText->TabIndex = 19;
			this->npcText->Text = L"0";
			// 
			// portalText
			// 
			this->portalText->AutoSize = true;
			this->portalText->ForeColor = System::Drawing::Color::Coral;
			this->portalText->Location = System::Drawing::Point(428, 51);
			this->portalText->Name = L"portalText";
			this->portalText->Size = System::Drawing::Size(12, 11);
			this->portalText->TabIndex = 18;
			this->portalText->Text = L"0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Silver;
			this->label18->Location = System::Drawing::Point(355, 64);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(75, 11);
			this->label18->TabIndex = 17;
			this->label18->Text = L"NPC Count:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Silver;
			this->label19->Location = System::Drawing::Point(334, 51);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(96, 11);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Portal Count:";
			// 
			// itemText
			// 
			this->itemText->AutoSize = true;
			this->itemText->ForeColor = System::Drawing::Color::Coral;
			this->itemText->Location = System::Drawing::Point(197, 30);
			this->itemText->Name = L"itemText";
			this->itemText->Size = System::Drawing::Size(12, 11);
			this->itemText->TabIndex = 15;
			this->itemText->Text = L"0";
			// 
			// mobText
			// 
			this->mobText->AutoSize = true;
			this->mobText->ForeColor = System::Drawing::Color::Coral;
			this->mobText->Location = System::Drawing::Point(197, 17);
			this->mobText->Name = L"mobText";
			this->mobText->Size = System::Drawing::Size(12, 11);
			this->mobText->TabIndex = 14;
			this->mobText->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Silver;
			this->label14->Location = System::Drawing::Point(106, 30);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 11);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Item Count:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Silver;
			this->label15->Location = System::Drawing::Point(106, 17);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(75, 11);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Mob Count:";
			// 
			// atkText
			// 
			this->atkText->AutoSize = true;
			this->atkText->ForeColor = System::Drawing::Color::Coral;
			this->atkText->Location = System::Drawing::Point(197, 43);
			this->atkText->Name = L"atkText";
			this->atkText->Size = System::Drawing::Size(12, 11);
			this->atkText->TabIndex = 11;
			this->atkText->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Silver;
			this->label12->Location = System::Drawing::Point(106, 43);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 11);
			this->label12->TabIndex = 10;
			this->label12->Text = L"ATK Count:";
			// 
			// expText
			// 
			this->expText->AutoSize = true;
			this->expText->ForeColor = System::Drawing::Color::Coral;
			this->expText->Location = System::Drawing::Point(49, 69);
			this->expText->Name = L"expText";
			this->expText->Size = System::Drawing::Size(12, 11);
			this->expText->TabIndex = 9;
			this->expText->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Silver;
			this->label9->Location = System::Drawing::Point(5, 69);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 11);
			this->label9->TabIndex = 8;
			this->label9->Text = L"EXP:";
			// 
			// hpText
			// 
			this->hpText->AutoSize = true;
			this->hpText->ForeColor = System::Drawing::Color::Coral;
			this->hpText->Location = System::Drawing::Point(49, 43);
			this->hpText->Name = L"hpText";
			this->hpText->Size = System::Drawing::Size(12, 11);
			this->hpText->TabIndex = 7;
			this->hpText->Text = L"0";
			// 
			// mpText
			// 
			this->mpText->AutoSize = true;
			this->mpText->ForeColor = System::Drawing::Color::Coral;
			this->mpText->Location = System::Drawing::Point(49, 56);
			this->mpText->Name = L"mpText";
			this->mpText->Size = System::Drawing::Size(12, 11);
			this->mpText->TabIndex = 6;
			this->mpText->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Silver;
			this->label10->Location = System::Drawing::Point(6, 56);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 11);
			this->label10->TabIndex = 5;
			this->label10->Text = L"MP:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Silver;
			this->label11->Location = System::Drawing::Point(5, 43);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(26, 11);
			this->label11->TabIndex = 4;
			this->label11->Text = L"HP:";
			// 
			// textY
			// 
			this->textY->AutoSize = true;
			this->textY->ForeColor = System::Drawing::Color::Coral;
			this->textY->Location = System::Drawing::Point(49, 30);
			this->textY->Name = L"textY";
			this->textY->Size = System::Drawing::Size(12, 11);
			this->textY->TabIndex = 3;
			this->textY->Text = L"0";
			// 
			// textX
			// 
			this->textX->AutoSize = true;
			this->textX->ForeColor = System::Drawing::Color::Coral;
			this->textX->Location = System::Drawing::Point(49, 17);
			this->textX->Name = L"textX";
			this->textX->Size = System::Drawing::Size(12, 11);
			this->textX->TabIndex = 2;
			this->textX->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Silver;
			this->label5->Location = System::Drawing::Point(5, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 11);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Y:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Silver;
			this->label2->Location = System::Drawing::Point(5, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 11);
			this->label2->TabIndex = 0;
			this->label2->Text = L"X:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Console", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label4->Location = System::Drawing::Point(313, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 8);
			this->label4->TabIndex = 4;
			this->label4->Text = L"(Winning is that simple.)";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::DeepSkyBlue;
			this->linkLabel1->Location = System::Drawing::Point(313, 132);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(82, 11);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"SNS Gaming.";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &DTMain::linkLabel1_LinkClicked);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label3->Location = System::Drawing::Point(71, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(236, 11);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Trainer created by mach_kernel of";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(168, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hello there.";
			// 
			// tabUI
			// 
			this->tabUI->Controls->Add(this->tabPage1);
			this->tabUI->Controls->Add(this->tabPage2);
			this->tabUI->Controls->Add(this->tabPage3);
			this->tabUI->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabUI->Location = System::Drawing::Point(-2, 102);
			this->tabUI->Name = L"tabUI";
			this->tabUI->SelectedIndex = 0;
			this->tabUI->Size = System::Drawing::Size(523, 196);
			this->tabUI->TabIndex = 0;
			// 
			// killBT
			// 
			this->killBT->Font = (gcnew System::Drawing::Font(L"Lucida Console", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->killBT->ForeColor = System::Drawing::Color::Black;
			this->killBT->Location = System::Drawing::Point(453, 3);
			this->killBT->Name = L"killBT";
			this->killBT->Size = System::Drawing::Size(66, 14);
			this->killBT->TabIndex = 4;
			this->killBT->Text = L"Killswitch";
			this->killBT->UseVisualStyleBackColor = true;
			this->killBT->Click += gcnew System::EventHandler(this, &DTMain::killBT_Click);
			// 
			// statsTimer
			// 
			this->statsTimer->Enabled = true;
			this->statsTimer->Tick += gcnew System::EventHandler(this, &DTMain::statsTimer_Tick);
			// 
			// lootTimer
			// 
			this->lootTimer->Interval = 1000;
			this->lootTimer->Tick += gcnew System::EventHandler(this, &DTMain::lootTimer_Tick);
			// 
			// attackTimer
			// 
			this->attackTimer->Interval = 1000;
			this->attackTimer->Tick += gcnew System::EventHandler(this, &DTMain::attackTimer_Tick);
			// 
			// potTimer
			// 
			this->potTimer->Tick += gcnew System::EventHandler(this, &DTMain::potTimer_Tick);
			// 
			// intelliKami
			// 
			this->intelliKami->Tick += gcnew System::EventHandler(this, &DTMain::intelliKami_Tick);
			// 
			// intelliForce
			// 
			this->intelliForce->Tick += gcnew System::EventHandler(this, &DTMain::intelliForce_Tick);
			// 
			// DTMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(521, 281);
			this->Controls->Add(this->killBT);
			this->Controls->Add(this->tabUI);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->Name = L"DTMain";
			this->Opacity = 0.9;
			this->ShowIcon = false;
			this->Text = L"David\'s Trainer [GMS v95.3] Release 2.5 :: SNS";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &DTMain::DTMain_Load);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabUI->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

HWND FindProcessWindow(__in DWORD dwProcessId, __in LPCTSTR lpcszClass)
{
	TCHAR szBuffer[200];
	DWORD dwTemp;

	for (HWND hWnd = GetTopWindow(NULL); hWnd != NULL; hWnd = GetNextWindow(hWnd, GW_HWNDNEXT))
	{
		if (GetClassName(hWnd, szBuffer, _countof(szBuffer)) == 0)
			continue;

		if (_tcsicmp(szBuffer, lpcszClass) != 0)
			continue;

		GetWindowThreadProcessId(hWnd, &dwTemp);

		if (dwTemp == dwProcessId)
			return hWnd;
	}

	return NULL;
}

void SendKey(HWND hWndTargetWindow, BYTE virtualKey)
{
	keybd_event(virtualKey, 0, 0, 0);
	keybd_event(virtualKey, 0, KEYEVENTF_KEYUP, 0);
}


void Memory(PVOID address, void* val, int bytes)
{
	DWORD d, ds;
	VirtualProtect(address, bytes, PAGE_EXECUTE_READWRITE, &d);
	memcpy(address, val, bytes);
	VirtualProtect(address,bytes,d,&ds);
}

unsigned long GetPointedAddress(unsigned long ulBase, int iOffset)
{
	__try { return *(unsigned long*)ulBase + iOffset; }
	__except (EXCEPTION_EXECUTE_HANDLER) { return 0; }
}

DWORD ReadPointer(CONST LPDWORD lpdwBase, CONST INT iOffset)
{
	__try { return *(LPDWORD)(*lpdwBase + iOffset); }
	__except (EXCEPTION_EXECUTE_HANDLER) { return NULL; }
}

bool WritePointer(unsigned long ulBase, int iOffset, int iValue)
{
	__try { *(int*)(*(unsigned long*)ulBase + iOffset) = iValue; return true; }
	__except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}

bool WriteValue(unsigned long ulBase, int iOffset, int iValue)
{
	__try { *(int*)(ulBase + iOffset) = iValue; return true; }
	__except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}

double getEXP()
{
	__try{
		int dwRealPtr = *((int*)lpdwStatBase) + StatEXPOff;
		return *(double*)dwRealPtr;}
	__except (EXCEPTION_EXECUTE_HANDLER) {return NULL;}

}

double roundEXP(double x)
{
	double f, xi, xf;

	xf = modf(x,&xi);
	f = floor(xf*100+0.5)/100.0;
	return xi + f;
}

private: System::Void killBT_Click(System::Object^  sender, System::EventArgs^  e) {

			 System::Windows::Forms::DialogResult result;
			 result = MessageBox::Show(this, "Are you sure you want to kill MapleStory?", "You woke up the killswitch, man!", MessageBoxButtons::YesNo, MessageBoxIcon::Stop);

			 if ( result == ::DialogResult::Yes )
			 {
				TerminateProcess(GetCurrentProcess(), 0);
			 }

		 }


private: System::Void DTMain_Load(System::Object^  sender, System::EventArgs^  e) {

			 
		 }

private: System::Void statsTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

			 // Character Constants
			 const LPDWORD CharConst = LPDWORD(CharBase);
			 int xLoc = ReadPointer(CharConst, OFS_X);
			 int yLoc = ReadPointer(CharConst, OFS_Y);
			 int atkCT = ReadPointer(CharConst, OFS_ATKCT);
			 int atkCB = ReadPointer(CharConst, OFS_ATKCB);
			 int cBrth = ReadPointer(CharConst, OFS_BRTH);

			 // GUI Constants
			 const LPDWORD GUIConst = LPDWORD(GUIBase);
			 int HP = ReadPointer(GUIConst, OFS_HP);
			 int MP = ReadPointer(GUIConst, OFS_MP);
			 double EXP = getEXP();

			 // Mob Constants
			 const LPDWORD MobConst = LPDWORD(MobBase);
			 int mobCT = ReadPointer(MobConst, OFS_MOBCT);
			 //int mobX = ReadPointer(MobConst, OFS_MOBX);
			 //int mobY = ReadPointer(MobConst, OFS_MOBY);

			 // Get Mob Struct
			 // Mob 1
			 unsigned long OriginalX = GetPointedAddress(MobBase, OFS_MO1);
			 unsigned long OX2 = GetPointedAddress(OriginalX, OFS_MO2);
			 unsigned long OX3 = GetPointedAddress(OX2, OFS_MO3);
			 unsigned long OX4 = GetPointedAddress(OX3, OFS_MO4);
			 unsigned long OX5 = GetPointedAddress(OX4, OFS_MO5);
			 unsigned long OX6 = GetPointedAddress(OX5, OFS_MO6);
			 unsigned long OX7 = GetPointedAddress(OX6, OFS_MO7);
			 int xM1F = ReadPointer(LPDWORD(OX7), OFS_MOX);
			 int yMIF = ReadPointer(LPDWORD(OX7), OFS_MOY);

			 //// Mob 2
			 //unsigned long Original2 = GetPointedAddress(MobBase, OFS_MO1);
			 //unsigned long AX21 = GetPointedAddress(Original2, OFS_MO21);
			 //unsigned long AX22 = GetPointedAddress(AX21, OFS_MO22);
			 //unsigned long AX3 = GetPointedAddress(AX22, OFS_MO3);
			 //unsigned long AX4 = GetPointedAddress(AX3, OFS_MO4);
			 //unsigned long AX5 = GetPointedAddress(AX4, OFS_MO5);
			 //unsigned long AX6 = GetPointedAddress(AX5, OFS_MO6);
			 //unsigned long AX7 = GetPointedAddress(AX6, OFS_MO7);
			 //int xM2F = ReadPointer(LPDWORD(AX7), OFS_MOX);
			 //int yM2F = ReadPointer(LPDWORD(AX7), OFS_MOY);


			 // Minimap Constants
			 const LPDWORD MapConst = LPDWORD(MiniMapBase);
			 int numNPC = ReadPointer(MapConst, OFS_NPCCT);
			 int mapID = ReadPointer(MapConst, OFS_MAPID);

			 // Item Base
			 const LPDWORD ItemConst = LPDWORD(ItemBase);
			 int itmCT = ReadPointer(ItemConst, OFS_ITMCT);

			 // Portal Base
			 const LPDWORD PortConst = LPDWORD(PortalBase);
			 int prtCT = ReadPointer(PortConst, OFS_PRTCT);

			 // Random Base
			 const LPDWORD RandConst = LPDWORD(RandBase);
			 int worldID = ReadPointer(RandConst, OFS_WORLD);
			 int noChan = ReadPointer(RandConst, OFS_CHAN) + 1;

			 //// World stuff

			 //if (worldID = 0)
			 //{
				// textWorld->Text = "Scania";
			 //}
			 //else if (worldID = 1)
			 //{
				// textWorld->Text = "Bera";
			 //}
			 //else if (worldID = 2)
			 //{
				// textWorld->Text = "Broa";
			 //}
			 //else if (worldID = 3)
			 //{
				// textWorld->Text = "Windia";
			 //}
			 //else if (worldID = 4)
			 //{
				// textWorld->Text = "Khaini";
			 //}
			 //else if (worldID = 5)
			 //{
				// textWorld->Text = "Bellocan";
			 //}
			 //else if (worldID = 11)
			 //{
				// textWorld->Text = "El Nido";
			 //}
			 //else if (worldID = 12)
			 //{
				// textWorld->Text = "Zenith";
			 //}
			 //else
			 //{
				// textWorld->Text = "n/a";
			 //}

			 // Update Fields
			 textX->Text = System::Convert::ToString(xLoc);
			 textY->Text = System::Convert::ToString(yLoc);
			 hpText->Text = System::Convert::ToString(HP);
			 mpText->Text = System::Convert::ToString(MP);
			 expText->Text = System::Convert::ToString(roundEXP(EXP)) + "%";
			 npcText->Text = System::Convert::ToString(numNPC);
			 itemText->Text = System::Convert::ToString(itmCT);
			 mobText->Text = System::Convert::ToString(mobCT);
			 portalText->Text = System::Convert::ToString(prtCT);
			 atkText->Text = System::Convert::ToString(atkCT);
			 textMapID->Text = System::Convert::ToString(mapID);
			 textBreath->Text = System::Convert::ToString(cBrth);
			 textCombo->Text = System::Convert::ToString(atkCB);
			 textChannel->Text = System::Convert::ToString(noChan);
			 textmobX->Text = System::Convert::ToString(xM1F);
			 textMobY->Text = System::Convert::ToString(yMIF);
			 //textmob2x->Text = System::Convert::ToString(xM2F);
			 //textmob2x->Text = System::Convert::ToString(yM2F);

			 // Auto pot (bahaha, pot)

			 // Set HP/MP alerts to 20!
			 WritePointer(AlrtBase, OFS_HPA, 20);
			 WritePointer(AlrtBase, OFS_MPA, 20);

			 potHP->Text = System::Convert::ToString(HP);
			 potMP->Text = System::Convert::ToString(MP);

	  }

private: System::Void blinkGod_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 	 static BYTE bgmona1[] = {0x83, 0xC7};
				 static BYTE bgmona2[] = {0xEB, 0x09};
				 static BYTE bgmoffa1[] = {0x83, 0xEF};
				 static BYTE bgmoffa2[] = {0x7E, 0x21};
				 static DWORD BgmAddy1 = 0x008FE262;
				 static DWORD BgmAddy2 = 0x008FE257;

				 if (blinkGod->CheckState == CheckState::Checked)
				 {
					 Memory((LPVOID)BgmAddy1, bgmona1, 2);
					 Memory((LPVOID)BgmAddy2, bgmona2, 2);
				 }
				 else
				 {
					 Memory((LPVOID)BgmAddy1, bgmoffa1, 2);
					 Memory((LPVOID)BgmAddy2, bgmoffa2, 2);
				 }
		 }

private: System::Void sitHack_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE siton[] = {0x75};
			 static BYTE sitoff[] = {0x74};
			 static DWORD SitAddy = 0x009084F7;

			 if (sitHack->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)SitAddy, siton, 1);
			 }
			 else
			 {
				 Memory((LPVOID)SitAddy, sitoff, 1);
			 }

		 }
private: System::Void checkTubi_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE tubinop1[] = {0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90};
			 static BYTE tubinop2[] = {0x90, 0x90, 0x90, 0x90, 0x90, 0x90};
			 static BYTE origopcode1[] = {0xC7, 0x86, 0xB8, 0x20, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00};
			 static BYTE origopcode2[] = {0x89, 0xB7, 0xB8, 0x20, 0x00, 0x00};
			 // Long NOP
			 static DWORD TubiAddy1 = 0x0052F12C;
			 static DWORD TubiAddy2 = 0x0093ED70;
			 // Short Nop
			 static DWORD TubiAddy3 = 0x009D9FFB;
			 static DWORD TubiAddy4 = 0x009F6A14;

			 if (checkTubi->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)TubiAddy1, tubinop1, 10);
				 Memory((LPVOID)TubiAddy2, tubinop1, 10);
				 Memory((LPVOID)TubiAddy3, tubinop2, 6);
				 Memory((LPVOID)TubiAddy4, tubinop2, 6);
			 }
			 else
			 {
				 Memory((LPVOID)TubiAddy1, origopcode1, 10);
				 Memory((LPVOID)TubiAddy2, origopcode1, 10);
				 Memory((LPVOID)TubiAddy3, origopcode2, 6);
				 Memory((LPVOID)TubiAddy4, origopcode2, 6);
			 }

		 }
private: System::Void checkNokbme_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE nokbmeon[] = {0x00};
			 static BYTE nokbmeoff[] = {0x01};
			 static DWORD nokbmeaddy = 0x0074901B;

			 if(checkNokbme->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)nokbmeaddy, nokbmeon, 1);
			 }
			 else
			 {
				 Memory((LPVOID)nokbmeaddy, nokbmeoff, 1);
			 }
		 }
private: System::Void checkMobkb_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE mobkbon[] = {0x75};
			 static BYTE mobkboff[] = {0x74};
			 static DWORD mobkbaddy = 0x0655722;

			 if(checkMobkb->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)mobkbaddy, mobkbon, 1);
			 }
			 else
			 {
				 Memory((LPVOID)mobkbaddy, mobkboff, 1);
			 }
		 }
private: System::Void checkNBreath_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE breathON[] = {0x7C};
			 static BYTE breathOFF[] = {0x7D};
			 static DWORD nobreathaddy = 0x0046C102;

			 if(checkNBreath->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)nobreathaddy, breathON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)nobreathaddy, breathOFF, 1);
			 }


		 }
private: System::Void checkUA_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE uaON[] = {0xEB};
			 static BYTE uaOFF[] = {0x7E};
			 static DWORD uaAddy = 0x00903510;

			 if(checkUA->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)uaAddy, uaON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)uaAddy, uaOFF, 1);
			 }
		 }

private: System::Void checkFGM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE fgmON[] = {0x0F, 0x84};
			 static BYTE fgmOFF[] = {0x0F, 0x85};
			 static DWORD fgmAddy = 0x009343FC;

			 if (checkFGM->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)fgmAddy, fgmON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)fgmAddy, fgmOFF, 2);
			 }


		 }
private: System::Void checkMGM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE mgmON[] = {0x0F, 0x85};
			 static BYTE mgmOFF[] = {0x0F, 0x84};
			 static DWORD mgmAddy = 0x00934615;

			 if (checkMGM->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)mgmAddy, mgmON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)mgmAddy, mgmOFF, 2);
			 }
		 }
private: System::Void lpVac_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE lpON[] = {0x00};
			 static BYTE lpOFF[] = {0x01};
			 static DWORD lpAddy = 0x00992673;

			 if(lpVac->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)lpAddy, lpON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)lpAddy, lpOFF, 1);
			 }
		 }
private: System::Void rpVac_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE rpON[] = {0x01};
			 static BYTE rpOFF[] = {0x00};
			 static DWORD rpAddy = 0x009926CD;

			 if(rpVac->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)rpAddy, rpON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)rpAddy, rpOFF, 1);
			 }
		 }
private: System::Void lfVac_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE lfON[] = {0x0F, 0x84};
			 static BYTE lfOFF[] = {0x0F, 0x85};
			 static DWORD lfAddy = 0x0099113F;

			 if (lfVac->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)lfAddy, lfON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)lfAddy, lfOFF, 2);
			 }
		 }
private: System::Void lfMVac_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE lfmON[] = {0x90, 0x90};
			 static BYTE lfmOFF[] = {0x7A, 0x4D};
			 static DWORD lfmAddy = 0x00992665;

			 if (lfMVac->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)lfmAddy, lfmON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)lfmAddy, lfmOFF, 2);
			 }
		 }
private: System::Void rfVac_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE rfON[] = {0x0C};
			 static BYTE rfOFF[] = {0x2C};
			 static DWORD rfAddy = 0x009911E7;

			 if(rfVac->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)rfAddy, rfON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)rfAddy, rfOFF, 1);
			 }
		 }


private: System::Void checkPIC_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE picON[] = {0x0F, 0x85};
			 static BYTE picOFF[] = {0x0F, 0x84};
			 static DWORD picAddy = 0x004E3FCF;

			 if (checkPIC->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)picAddy, picON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)picAddy, picOFF, 2);
			 }

	  }

private: System::Void autoLoot_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 int lootDelay = System::Convert::ToInt16(lootMS->Text);
			 lootTimer->Interval = lootDelay;

			 if (autoLoot->CheckState == CheckState::Checked)
			 {
				 lootTimer->Enabled = true;
			 }
			 else
			 {
				 lootTimer->Enabled = false;
			 }



		 }

private: System::Void lootTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

			 HWND maplehwnd = FindProcessWindow(GetCurrentProcessId(), "MaplestoryClass");

			 if(autoLoot->CheckState == CheckState::Checked)
			 {
				 PostMessage(maplehwnd, WM_KEYDOWN, 0x5A, (MapVirtualKey(0x5A, 0) << 16) );
			 }

		 }
 private: System::Void autoATK_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			  int attackDelay = System::Convert::ToInt16(atkMS->Text);
			  attackTimer->Interval = attackDelay;

			  if (autoATK->CheckState == CheckState::Checked)
			  {
				  attackTimer->Enabled = true;
			  }
			  else
			  {
				  attackTimer->Enabled = false;
			  }

		  }
private: System::Void attackTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

			 HWND maplehwnd = FindProcessWindow(GetCurrentProcessId(), "MaplestoryClass");

			 if(autoATK->CheckState == CheckState::Checked)
			 {
				 PostMessage(maplehwnd, WM_KEYDOWN, 0x11, (MapVirtualKey(0x11, 0) << 16) );
			 }

		 }

private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 ShellExecute(NULL, "open", "http://snsgaming.com",
				 NULL, NULL, SW_SHOWNORMAL);
		 }
private: System::Void checkMoon_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE moonON[] = {0x74};
			 static BYTE moonOFF[] = {0x75};
			 static DWORD moonAddy = 0x0099102D;

			 if (checkPIC->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)moonAddy, moonON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)moonAddy, moonOFF, 1);
			 }
		 }
private: System::Void checkFloor_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE fallON[] = {0x00};
			 static BYTE fallOFF[] = {0x02};
			 static DWORD fallAddy = 0x009948DB;

			 if (checkPIC->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)fallAddy, fallON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)fallAddy, fallOFF, 1);
			 }
		 }
private: System::Void autoPot_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (autoPot->CheckState == CheckState::Checked)
			 {
				 if (hpPotVal->Text == "" && mpPotVal->Text == "")
				 {
					 MessageBox::Show(this, "You can't leave these blank, nor can you use any letters or you'll get a nasty exception later on. (How'd you think time was measured in letters, anyway?)", "Values?", MessageBoxButtons::OK, MessageBoxIcon::Stop);
					 autoPot->CheckState = CheckState::Unchecked;
				 }
				 else
				 {
					 potTimer->Enabled = true;
				 }

			 }
			 else
			 {
				 potTimer->Enabled = false;
			 }

		 }
private: System::Void potTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

			 HWND maplehwnd = FindProcessWindow(GetCurrentProcessId(), "MaplestoryClass");

			 const LPDWORD GUIConst = LPDWORD(GUIBase);
			 int HP = ReadPointer(GUIConst, OFS_HP);
			 int MP = ReadPointer(GUIConst, OFS_MP);
			 int hpVal = System::Convert::ToInt32(hpPotVal->Text);
			 int mpVal = System::Convert::ToInt32(mpPotVal->Text);


			 

			 if (autoPot->CheckState == CheckState::Checked)
			 {
				 if (hpVal == 0)
				 {
					 offhp->Visible = true;
				 }
				 if (mpVal == 0)
				 {
					 offmp->Visible = true;
				 }

				 if (hpVal > 0)
				 {
					 offhp->Visible = false;
				 }
				 if (mpVal > 0)
				 {
					 offmp->Visible = false;
				 }

				 if (hpVal > HP)
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x24, (MapVirtualKey(0x24, 0) << 16) );
				 }
				 else if (mpVal > MP)
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x23, (MapVirtualKey(0x23, 0) << 16) );
				 }
			 }
		 }
private: System::Void mapSpeed_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE fastON[] = {0x58};
			 static BYTE fastOFF[] = {0x08};
			 static DWORD fastAddy = 0x00992E8D;

			 if(mapSpeed->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)fastAddy, fastON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)fastAddy, fastOFF, 1);
			 }
		 }
private: System::Void csDark_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE darkON[] = {0x74};
			 static BYTE darkOFF[] = {0x75};
			 static DWORD darkAddy = 0x008FE2FA;

			 if(csDark->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)darkAddy, darkON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)darkAddy, darkOFF, 1);
			 }
		 }
private: System::Void checkpermS_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE permsON[] = {0xBA, 0x84, 0x13, 0x00, 0x00, 0x90};
			 static BYTE permsOFF[] = {0x2B, 0x96, 0xE8, 0x3A, 0x00, 0x00};
			 static DWORD permsAddy = 0x0093D584;

			 if(checkEF->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)permsAddy, permsON, 6);
			 }
			 else
			 {
				 Memory((LPVOID)permsAddy, permsOFF, 4);
			 }

	  }
private: System::Void checkEF_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 
				 static BYTE flameON[] = {0x89, 0x86, 0xD8};
				 static BYTE flameOFF[] = {0x89, 0x86, 0xDC};
				 static DWORD flameAddy = 0x00944491;

				 if(checkEF->CheckState == CheckState::Checked)
				 {
					 Memory((LPVOID)flameAddy, flameON, 3);
				 }
				 else
				 {
					 Memory((LPVOID)flameAddy, flameOFF, 3);
				 }
		 }

private: System::Void checkiKam_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (checkiKam->CheckState == CheckState::Checked)
			 {
				 intelliKami->Interval = System::Convert::ToInt16(kamiDel->Text);
				 intelliKami->Enabled = true;
			 }
		 }

private: System::Void intelliKami_Tick(System::Object^  sender, System::EventArgs^  e) {

			 if (checkiKam->CheckState == CheckState::Checked)
			 {
				 unsigned long OriginalX = GetPointedAddress(MobBase, OFS_MO1);
				 unsigned long OX2 = GetPointedAddress(OriginalX, OFS_MO2);
				 unsigned long OX3 = GetPointedAddress(OX2, OFS_MO3);
				 unsigned long OX4 = GetPointedAddress(OX3, OFS_MO4);
				 unsigned long OX5 = GetPointedAddress(OX4, OFS_MO5);
				 unsigned long OX6 = GetPointedAddress(OX5, OFS_MO6);
				 unsigned long OX7 = GetPointedAddress(OX6, OFS_MO7);
				 int xM1F = ReadPointer(LPDWORD(OX7), OFS_MOX);
				 int yMIF = ReadPointer(LPDWORD(OX7), OFS_MOY);

				 WritePointer(CharBase, OFS_TTOG, 1);
				 WritePointer(CharBase, OFS_TX, xM1F);
				 WritePointer(CharBase, OFS_TY, yMIF);
				 WritePointer(CharBase, OFS_X, xM1F);
				 WritePointer(CharBase, OFS_X, yMIF);
			 }

		 }
private: System::Void checkiForce_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE lfON[] = {0x0F, 0x84};
			 static BYTE lfOFF[] = {0x0F, 0x85};
			 static DWORD lfAddy = 0x0099113F;

			 if (checkiForce->CheckState == CheckState::Checked)
			 {
				 intelliKami->Interval = System::Convert::ToInt16(forceDelay->Text);
				 intelliKami->Enabled = true;
			 }
			 else
			 {
				 Memory((LPVOID)lfAddy, lfOFF, 2);
				 intelliForce->Enabled = false;
			 }
		 }

private: System::Void intelliForce_Tick(System::Object^  sender, System::EventArgs^  e) {

			 if (checkiForce->CheckState == CheckState::Checked)
			 {
				 static BYTE lfON[] = {0x0F, 0x84};
				 static BYTE lfOFF[] = {0x0F, 0x85};
				 static DWORD lfAddy = 0x0099113F;

				 if (checkiForce->CheckState == CheckState::Checked)
				 {
					 Memory((LPVOID)lfAddy, lfON, 2);
				 }
			 }

		 }
};
}
