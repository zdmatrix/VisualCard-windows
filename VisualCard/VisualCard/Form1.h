#pragma once


#include <iostream>
#include <string>

#include <windows.h>

extern "C" {    // this MUST be included

// These files are in the Windows DDK
//#include <initguid.h>
#include "hidsdi.h"
#include <setupapi.h>

}   // extern "C"
//#include <sstream>

namespace VisualCard {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

//	using namespace std;


	/// <summary>
	/// Form1 ժҪ
	///
	/// ����: ������Ĵ�������ƣ�����Ҫ����
	///          ����������������� .resx �ļ��������й���Դ���������ߵ�
	///          ����Դ�ļ��������ԡ�����
	///          �������������˴���Ĺ���
	///          ���ػ���Դ��ȷ������
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	
	public:

		int g_nChallangeCodeTimes;
		array<int^>^ g_nChallangeCode;
		String^ strChallangeCode;
		
		bool g_bDeviceConnected;
	
        

		Guid g_guidStandardDeviceId;

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
			g_nChallangeCodeTimes = 0;
			g_nChallangeCode = gcnew array<int^>(6);
			g_bDeviceConnected = false;
			g_guidStandardDeviceId = Guid("{50DD5230-BA8A-11D1-BF5D-0000F805F530}");
		}

		
	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBoxDevice;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnPowerUp;
	private: System::Windows::Forms::Button^  btnPowerDown;
	private: System::Windows::Forms::Button^  btnProbeCard;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnWriteCard;
	private: System::Windows::Forms::Button^  btnReadCard;
	private: System::Windows::Forms::Splitter^  splitter1;
	private: System::Windows::Forms::TextBox^  textWriteCard;
	private: System::Windows::Forms::TextBox^  textRandomData;
	private: System::Windows::Forms::TextBox^  textOpStatusCardTest;

	private: System::Windows::Forms::TextBox^  textSW;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBanlanceElecMoney;

	private: System::Windows::Forms::Button^  btnBanlance;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  btnCharge;


	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  btnCounsume;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textOpStatusElecMoney;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  btnRSAKey;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textOpStatusNewUKey;

	private: System::Windows::Forms::Label^  label25;

	private: System::Windows::Forms::Button^  btnSendData;
	private: System::Windows::Forms::TextBox^  textBanlanceNewUKey;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBoxAuthCode;


	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Button^  btnDownloadCode;


	private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  textChallangeCode;

	private: System::Windows::Forms::Button^  btnGenerateChallangeCode;
	private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  textOPStatusOTP;

private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::PictureBox^  pictureBoxLogIn;

private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Button^  btnLogIn;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label29;





	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textSW = (gcnew System::Windows::Forms::TextBox());
			this->textOpStatusCardTest = (gcnew System::Windows::Forms::TextBox());
			this->textRandomData = (gcnew System::Windows::Forms::TextBox());
			this->textWriteCard = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnWriteCard = (gcnew System::Windows::Forms::Button());
			this->btnReadCard = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnPowerUp = (gcnew System::Windows::Forms::Button());
			this->btnPowerDown = (gcnew System::Windows::Forms::Button());
			this->btnProbeCard = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textOpStatusElecMoney = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->btnCounsume = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btnCharge = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBanlanceElecMoney = (gcnew System::Windows::Forms::TextBox());
			this->btnBanlance = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBoxAuthCode = (gcnew System::Windows::Forms::PictureBox());
			this->textBanlanceNewUKey = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textOpStatusNewUKey = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->btnSendData = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btnRSAKey = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->textOPStatusOTP = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxLogIn = (gcnew System::Windows::Forms::PictureBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->btnLogIn = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->btnDownloadCode = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textChallangeCode = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerateChallangeCode = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxDevice = (gcnew System::Windows::Forms::ComboBox());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxAuthCode))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogIn))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tabControl1->Location = System::Drawing::Point(12, 42);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(568, 392);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage1->Controls->Add(this->textSW);
			this->tabPage1->Controls->Add(this->textOpStatusCardTest);
			this->tabPage1->Controls->Add(this->textRandomData);
			this->tabPage1->Controls->Add(this->textWriteCard);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->btnWriteCard);
			this->tabPage1->Controls->Add(this->btnReadCard);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->btnPowerUp);
			this->tabPage1->Controls->Add(this->btnPowerDown);
			this->tabPage1->Controls->Add(this->btnProbeCard);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(560, 363);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"������";
			// 
			// textSW
			// 
			this->textSW->Location = System::Drawing::Point(84, 302);
			this->textSW->Name = L"textSW";
			this->textSW->ReadOnly = true;
			this->textSW->Size = System::Drawing::Size(240, 23);
			this->textSW->TabIndex = 15;
			this->textSW->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textOpStatusCardTest
			// 
			this->textOpStatusCardTest->Location = System::Drawing::Point(84, 266);
			this->textOpStatusCardTest->Name = L"textOpStatusCardTest";
			this->textOpStatusCardTest->ReadOnly = true;
			this->textOpStatusCardTest->Size = System::Drawing::Size(240, 23);
			this->textOpStatusCardTest->TabIndex = 14;
			this->textOpStatusCardTest->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textRandomData
			// 
			this->textRandomData->Location = System::Drawing::Point(9, 140);
			this->textRandomData->Name = L"textRandomData";
			this->textRandomData->ReadOnly = true;
			this->textRandomData->Size = System::Drawing::Size(214, 23);
			this->textRandomData->TabIndex = 13;
			this->textRandomData->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textRandomData->TextChanged += gcnew System::EventHandler(this, &Form1::textRandomData_TextChanged);
			// 
			// textWriteCard
			// 
			this->textWriteCard->Location = System::Drawing::Point(9, 175);
			this->textWriteCard->Name = L"textWriteCard";
			this->textWriteCard->Size = System::Drawing::Size(214, 23);
			this->textWriteCard->TabIndex = 12;
			this->textWriteCard->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 305);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 14);
			this->label7->TabIndex = 10;
			this->label7->Text = L"����SW";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 14);
			this->label6->TabIndex = 9;
			this->label6->Text = L"����״̬";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(6, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"�� ����״̬����������";
			// 
			// btnWriteCard
			// 
			this->btnWriteCard->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnWriteCard->Location = System::Drawing::Point(229, 175);
			this->btnWriteCard->Name = L"btnWriteCard";
			this->btnWriteCard->Size = System::Drawing::Size(95, 23);
			this->btnWriteCard->TabIndex = 7;
			this->btnWriteCard->Text = L"д��";
			this->btnWriteCard->UseVisualStyleBackColor = true;
			// 
			// btnReadCard
			// 
			this->btnReadCard->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnReadCard->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnReadCard->Location = System::Drawing::Point(229, 140);
			this->btnReadCard->Name = L"btnReadCard";
			this->btnReadCard->Size = System::Drawing::Size(95, 23);
			this->btnReadCard->TabIndex = 6;
			this->btnReadCard->Text = L"����";
			this->btnReadCard->UseVisualStyleBackColor = true;
			this->btnReadCard->Click += gcnew System::EventHandler(this, &Form1::btnReadCard_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(6, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"�� ��д������";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::LightGray;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(332, 3);
			this->label3->Margin = System::Windows::Forms::Padding(5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(221, 353);
			this->label3->TabIndex = 4;
			this->label3->Text = resources->GetString(L"label3.Text");
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(6, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"һ ��״̬���";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// btnPowerUp
			// 
			this->btnPowerUp->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnPowerUp->Location = System::Drawing::Point(249, 56);
			this->btnPowerUp->Name = L"btnPowerUp";
			this->btnPowerUp->Size = System::Drawing::Size(75, 23);
			this->btnPowerUp->TabIndex = 2;
			this->btnPowerUp->Text = L"���ϵ縴λ";
			this->btnPowerUp->UseVisualStyleBackColor = true;
			// 
			// btnPowerDown
			// 
			this->btnPowerDown->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnPowerDown->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnPowerDown->Location = System::Drawing::Point(133, 56);
			this->btnPowerDown->Name = L"btnPowerDown";
			this->btnPowerDown->Size = System::Drawing::Size(75, 23);
			this->btnPowerDown->TabIndex = 1;
			this->btnPowerDown->Text = L"������";
			this->btnPowerDown->UseVisualStyleBackColor = true;
			// 
			// btnProbeCard
			// 
			this->btnProbeCard->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnProbeCard->Location = System::Drawing::Point(9, 56);
			this->btnProbeCard->Name = L"btnProbeCard";
			this->btnProbeCard->Size = System::Drawing::Size(75, 23);
			this->btnProbeCard->TabIndex = 0;
			this->btnProbeCard->Text = L"̽��";
			this->btnProbeCard->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textOpStatusElecMoney);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->btnCounsume);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->btnCharge);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->textBanlanceElecMoney);
			this->tabPage2->Controls->Add(this->btnBanlance);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(560, 363);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"�����ֽ�";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textOpStatusElecMoney
			// 
			this->textOpStatusElecMoney->Location = System::Drawing::Point(91, 288);
			this->textOpStatusElecMoney->Name = L"textOpStatusElecMoney";
			this->textOpStatusElecMoney->ReadOnly = true;
			this->textOpStatusElecMoney->Size = System::Drawing::Size(196, 26);
			this->textOpStatusElecMoney->TabIndex = 16;
			this->textOpStatusElecMoney->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 241);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(96, 16);
			this->label18->TabIndex = 15;
			this->label18->Text = L"�� ����״̬";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 159);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(96, 16);
			this->label17->TabIndex = 14;
			this->label17->Text = L"�� ��ѯ���";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(71, 115);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(158, 26);
			this->textBox7->TabIndex = 13;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnCounsume
			// 
			this->btnCounsume->Location = System::Drawing::Point(237, 115);
			this->btnCounsume->Name = L"btnCounsume";
			this->btnCounsume->Size = System::Drawing::Size(91, 23);
			this->btnCounsume->TabIndex = 12;
			this->btnCounsume->Text = L"����";
			this->btnCounsume->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 83);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(64, 16);
			this->label16->TabIndex = 11;
			this->label16->Text = L"�� ����";
			// 
			// btnCharge
			// 
			this->btnCharge->Location = System::Drawing::Point(238, 37);
			this->btnCharge->Name = L"btnCharge";
			this->btnCharge->Size = System::Drawing::Size(90, 23);
			this->btnCharge->TabIndex = 10;
			this->btnCharge->Text = L"��ֵ";
			this->btnCharge->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(71, 37);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(158, 26);
			this->textBox6->TabIndex = 9;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 8);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(64, 16);
			this->label15->TabIndex = 8;
			this->label15->Text = L"һ ��ֵ";
			// 
			// textBanlanceElecMoney
			// 
			this->textBanlanceElecMoney->Location = System::Drawing::Point(71, 197);
			this->textBanlanceElecMoney->Name = L"textBanlanceElecMoney";
			this->textBanlanceElecMoney->ReadOnly = true;
			this->textBanlanceElecMoney->Size = System::Drawing::Size(158, 26);
			this->textBanlanceElecMoney->TabIndex = 7;
			this->textBanlanceElecMoney->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBanlanceElecMoney->TextChanged += gcnew System::EventHandler(this, &Form1::textBanlanceElecMoney_TextChanged);
			// 
			// btnBanlance
			// 
			this->btnBanlance->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnBanlance->Location = System::Drawing::Point(237, 197);
			this->btnBanlance->Name = L"btnBanlance";
			this->btnBanlance->Size = System::Drawing::Size(91, 23);
			this->btnBanlance->TabIndex = 6;
			this->btnBanlance->Text = L"��ѯ���";
			this->btnBanlance->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label14->BackColor = System::Drawing::Color::LightGray;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(335, 8);
			this->label14->Margin = System::Windows::Forms::Padding(5);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(220, 350);
			this->label14->TabIndex = 5;
			this->label14->Text = resources->GetString(L"label14.Text");
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->pictureBoxAuthCode);
			this->tabPage3->Controls->Add(this->textBanlanceNewUKey);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->textOpStatusNewUKey);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->btnSendData);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->btnRSAKey);
			this->tabPage3->Controls->Add(this->textBox8);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(560, 363);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"����UKey";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// pictureBoxAuthCode
			// 
			this->pictureBoxAuthCode->Location = System::Drawing::Point(22, 177);
			this->pictureBoxAuthCode->Name = L"pictureBoxAuthCode";
			this->pictureBoxAuthCode->Size = System::Drawing::Size(302, 105);
			this->pictureBoxAuthCode->TabIndex = 25;
			this->pictureBoxAuthCode->TabStop = false;
			this->pictureBoxAuthCode->Click += gcnew System::EventHandler(this, &Form1::pictureBoxAuthCode_Click);
			// 
			// textBanlanceNewUKey
			// 
			this->textBanlanceNewUKey->Location = System::Drawing::Point(441, 21);
			this->textBanlanceNewUKey->Name = L"textBanlanceNewUKey";
			this->textBanlanceNewUKey->ReadOnly = true;
			this->textBanlanceNewUKey->Size = System::Drawing::Size(111, 26);
			this->textBanlanceNewUKey->TabIndex = 24;
			this->textBanlanceNewUKey->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBanlanceNewUKey->TextChanged += gcnew System::EventHandler(this, &Form1::textBanlanceNewUKey_TextChanged);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button6->Location = System::Drawing::Point(344, 21);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(91, 23);
			this->button6->TabIndex = 23;
			this->button6->Text = L"��ѯ���";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textOpStatusNewUKey
			// 
			this->textOpStatusNewUKey->Location = System::Drawing::Point(46, 320);
			this->textOpStatusNewUKey->Name = L"textOpStatusNewUKey";
			this->textOpStatusNewUKey->ReadOnly = true;
			this->textOpStatusNewUKey->Size = System::Drawing::Size(237, 26);
			this->textOpStatusNewUKey->TabIndex = 22;
			this->textOpStatusNewUKey->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label25->Location = System::Drawing::Point(6, 294);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(84, 14);
			this->label25->TabIndex = 21;
			this->label25->Text = L"�� ����״̬";
			// 
			// btnSendData
			// 
			this->btnSendData->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnSendData->Location = System::Drawing::Point(249, 102);
			this->btnSendData->Name = L"btnSendData";
			this->btnSendData->Size = System::Drawing::Size(75, 47);
			this->btnSendData->TabIndex = 19;
			this->btnSendData->Text = L"�ύ���ݸ����ӿ�";
			this->btnSendData->UseVisualStyleBackColor = true;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label24->Location = System::Drawing::Point(19, 150);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(63, 14);
			this->label24->TabIndex = 18;
			this->label24->Text = L"ת�˽��";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(87, 145);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(142, 26);
			this->textBox11->TabIndex = 17;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(87, 113);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(142, 26);
			this->textBox10->TabIndex = 16;
			this->textBox10->Text = L"1023456789";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label23->Location = System::Drawing::Point(18, 118);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(63, 14);
			this->label23->TabIndex = 15;
			this->label23->Text = L"Ŀ���˻�";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(87, 81);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(142, 26);
			this->textBox9->TabIndex = 14;
			this->textBox9->Text = L"1234567890";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(19, 86);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(49, 14);
			this->label22->TabIndex = 13;
			this->label22->Text = L"Դ�˻�";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label21->Location = System::Drawing::Point(6, 62);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(56, 14);
			this->label21->TabIndex = 12;
			this->label21->Text = L"�� ת��";
			// 
			// btnRSAKey
			// 
			this->btnRSAKey->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnRSAKey->Location = System::Drawing::Point(21, 27);
			this->btnRSAKey->Name = L"btnRSAKey";
			this->btnRSAKey->Size = System::Drawing::Size(60, 23);
			this->btnRSAKey->TabIndex = 11;
			this->btnRSAKey->Text = L"ȡ��Կ";
			this->btnRSAKey->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(87, 24);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(237, 26);
			this->textBox8->TabIndex = 10;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label20->Location = System::Drawing::Point(6, 5);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(105, 14);
			this->label20->TabIndex = 9;
			this->label20->Text = L"һ ����RSA��Կ";
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label19->BackColor = System::Drawing::Color::LightGray;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(332, 62);
			this->label19->Margin = System::Windows::Forms::Padding(5);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(220, 293);
			this->label19->TabIndex = 6;
			this->label19->Text = resources->GetString(L"label19.Text");
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->textOPStatusOTP);
			this->tabPage4->Controls->Add(this->label31);
			this->tabPage4->Controls->Add(this->pictureBoxLogIn);
			this->tabPage4->Controls->Add(this->textBox12);
			this->tabPage4->Controls->Add(this->btnLogIn);
			this->tabPage4->Controls->Add(this->label30);
			this->tabPage4->Controls->Add(this->label29);
			this->tabPage4->Controls->Add(this->btnDownloadCode);
			this->tabPage4->Controls->Add(this->label28);
			this->tabPage4->Controls->Add(this->textChallangeCode);
			this->tabPage4->Controls->Add(this->btnGenerateChallangeCode);
			this->tabPage4->Controls->Add(this->label27);
			this->tabPage4->Controls->Add(this->label26);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(560, 363);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"OTP";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// textOPStatusOTP
			// 
			this->textOPStatusOTP->Location = System::Drawing::Point(50, 317);
			this->textOPStatusOTP->Name = L"textOPStatusOTP";
			this->textOPStatusOTP->ReadOnly = true;
			this->textOPStatusOTP->Size = System::Drawing::Size(240, 26);
			this->textOPStatusOTP->TabIndex = 22;
			this->textOPStatusOTP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textOPStatusOTP->TextChanged += gcnew System::EventHandler(this, &Form1::textOPStatusOTP_TextChanged);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label31->Location = System::Drawing::Point(7, 300);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(84, 14);
			this->label31->TabIndex = 21;
			this->label31->Text = L"�� ����״̬";
			// 
			// pictureBoxLogIn
			// 
			this->pictureBoxLogIn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxLogIn.Image")));
			this->pictureBoxLogIn->Location = System::Drawing::Point(10, 192);
			this->pictureBoxLogIn->Name = L"pictureBoxLogIn";
			this->pictureBoxLogIn->Size = System::Drawing::Size(302, 92);
			this->pictureBoxLogIn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLogIn->TabIndex = 20;
			this->pictureBoxLogIn->TabStop = false;
			this->pictureBoxLogIn->Visible = false;
			this->pictureBoxLogIn->Click += gcnew System::EventHandler(this, &Form1::pictureBoxLogIn_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(10, 160);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(201, 26);
			this->textBox12->TabIndex = 19;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnLogIn
			// 
			this->btnLogIn->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnLogIn->Location = System::Drawing::Point(217, 162);
			this->btnLogIn->Name = L"btnLogIn";
			this->btnLogIn->Size = System::Drawing::Size(95, 23);
			this->btnLogIn->TabIndex = 18;
			this->btnLogIn->Text = L"��¼";
			this->btnLogIn->UseVisualStyleBackColor = true;
			this->btnLogIn->Click += gcnew System::EventHandler(this, &Form1::btnLogIn_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label30->Location = System::Drawing::Point(7, 143);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(56, 14);
			this->label30->TabIndex = 17;
			this->label30->Text = L"�� ��¼";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label29->Location = System::Drawing::Point(6, 116);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(98, 14);
			this->label29->TabIndex = 16;
			this->label29->Text = L"�� ����Ӧ����";
			// 
			// btnDownloadCode
			// 
			this->btnDownloadCode->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnDownloadCode->Location = System::Drawing::Point(71, 79);
			this->btnDownloadCode->Name = L"btnDownloadCode";
			this->btnDownloadCode->Size = System::Drawing::Size(180, 23);
			this->btnDownloadCode->TabIndex = 15;
			this->btnDownloadCode->Text = L"�·���ս��";
			this->btnDownloadCode->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label28->Location = System::Drawing::Point(6, 62);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(98, 14);
			this->label28->TabIndex = 14;
			this->label28->Text = L"�� �·���ս��";
			// 
			// textChallangeCode
			// 
			this->textChallangeCode->Location = System::Drawing::Point(111, 23);
			this->textChallangeCode->Name = L"textChallangeCode";
			this->textChallangeCode->ReadOnly = true;
			this->textChallangeCode->Size = System::Drawing::Size(201, 26);
			this->textChallangeCode->TabIndex = 13;
			this->textChallangeCode->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textChallangeCode->TextChanged += gcnew System::EventHandler(this, &Form1::textChallangeCode_TextChanged);
			// 
			// btnGenerateChallangeCode
			// 
			this->btnGenerateChallangeCode->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnGenerateChallangeCode->Location = System::Drawing::Point(9, 25);
			this->btnGenerateChallangeCode->Name = L"btnGenerateChallangeCode";
			this->btnGenerateChallangeCode->Size = System::Drawing::Size(95, 23);
			this->btnGenerateChallangeCode->TabIndex = 12;
			this->btnGenerateChallangeCode->Text = L"�����ս��";
			this->btnGenerateChallangeCode->UseVisualStyleBackColor = true;
			this->btnGenerateChallangeCode->Click += gcnew System::EventHandler(this, &Form1::btnGenerateChallangeCode_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label27->Location = System::Drawing::Point(6, 8);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(98, 14);
			this->label27->TabIndex = 10;
			this->label27->Text = L"һ �����ս��";
			// 
			// label26
			// 
			this->label26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label26->BackColor = System::Drawing::Color::LightGray;
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label26->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label26->Location = System::Drawing::Point(335, 8);
			this->label26->Margin = System::Windows::Forms::Padding(5);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(220, 347);
			this->label26->TabIndex = 7;
			this->label26->Text = resources->GetString(L"label26.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(9, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"�����豸";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// comboBoxDevice
			// 
			this->comboBoxDevice->FormattingEnabled = true;
			this->comboBoxDevice->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"��", L"HED VisualCard Adaptor-USB"});
			this->comboBoxDevice->Location = System::Drawing::Point(87, 9);
			this->comboBoxDevice->Name = L"comboBoxDevice";
			this->comboBoxDevice->Size = System::Drawing::Size(219, 20);
			this->comboBoxDevice->TabIndex = 2;
			this->comboBoxDevice->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBoxDevice_SelectedIndexChanged);
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 446);
			this->splitter1->TabIndex = 3;
			this->splitter1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(84, 285);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 21);
			this->textBox1->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(84, 248);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(205, 21);
			this->textBox2->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 126);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(179, 21);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(9, 169);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(179, 21);
			this->textBox4->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 288);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 14);
			this->label8->TabIndex = 10;
			this->label8->Text = L"����SW";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 251);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 14);
			this->label9->TabIndex = 9;
			this->label9->Text = L"����״̬";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(12, 214);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(176, 16);
			this->label10->TabIndex = 8;
			this->label10->Text = L"�� ����״̬����������";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(194, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"д��";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(194, 126);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(6, 100);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(112, 16);
			this->label11->TabIndex = 5;
			this->label11->Text = L"�� ��д������";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->BackColor = System::Drawing::Color::LightGray;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->Location = System::Drawing::Point(297, 3);
			this->label12->Margin = System::Windows::Forms::Padding(5);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(256, 353);
			this->label12->TabIndex = 4;
			this->label12->Text = resources->GetString(L"label12.Text");
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(6, 23);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(112, 16);
			this->label13->TabIndex = 3;
			this->label13->Text = L"һ ��״̬���";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(214, 56);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"���ϵ縴λ";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(113, 56);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"������";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"����", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(9, 56);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 0;
			this->button5->Text = L"̽��";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(592, 446);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->comboBoxDevice);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�๦�ܿ���IC����ʾϵͳ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxAuthCode))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogIn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnReadCard_Click(System::Object^  sender, System::EventArgs^  e) {
			 textRandomData->Text = "12345";
		 }
private: System::Void textRandomData_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBanlanceElecMoney_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBanlanceNewUKey_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void pictureBoxAuthCode_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnLogIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBoxLogIn->Visible = true;

		 }
private: System::Void pictureBoxLogIn_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnGenerateChallangeCode_Click(System::Object^  sender, System::EventArgs^  e) {

			 char ch[20];
			 Random^ fixRandom = gcnew Random;
			 
			 if(g_bDeviceConnected){
			 for(int i= 0; i < 6; i ++){
				 g_nChallangeCode[i] = fixRandom->Next(10);
				 sprintf_s(ch, "%d", *g_nChallangeCode[i]);
				 String^ str= System::Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)ch); 
				 strChallangeCode += str;
				 
			 }
			 textChallangeCode->Text = strChallangeCode;
			 strChallangeCode = "";
			 textOPStatusOTP->Text = "������ս��ɹ�";	
			 }else{
				 MessageBox::Show("��������USB�豸");
			 }
		 }

private: System::Void textChallangeCode_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void textOPStatusOTP_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBoxDevice_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 GUID guidHID;
			 PSP_DEVICE_INTERFACE_DETAIL_DATA     strtDetailData = NULL;
			 HDEVINFO hDevInfo;
			 SP_DEVICE_INTERFACE_DATA		strtInterfaceData;
			 HANDLE hOut = INVALID_HANDLE_VALUE;
			 
			 
			 
			 bool bSuccess = false;
			 int index=0;
			 DWORD predictedLength = 0;
			 DWORD requiredLength = 0;

			 if(comboBoxDevice -> SelectedItem == "HED VisualCard Adaptor-USB"){
				 HidD_GetHidGuid(&guidHID);
				 hDevInfo = SetupDiGetClassDevs(&guidHID, NULL, 0,
						DIGCF_PRESENT|DIGCF_DEVICEINTERFACE );
	
				 if(hDevInfo != INVALID_HANDLE_VALUE){
					 strtInterfaceData.cbSize = sizeof(SP_DEVICE_INTERFACE_DATA);
					 for(int i = 0; i < 10; i++){
						bSuccess= SetupDiEnumDeviceInterfaces(hDevInfo, NULL, &guidHID, index,
								&strtInterfaceData);
						if (!bSuccess){	
								MessageBox::Show("����USB�豸����!\r\n");
								break;
						}else{
							if(strtInterfaceData.Flags == SPINT_ACTIVE ){
								SetupDiGetDeviceInterfaceDetail (
									hDevInfo,
									&strtInterfaceData,
									NULL, // probing so no output buffer yet
									0, // probing so output buffer length of zero
									&requiredLength,
									NULL); // not interested in the specific dev-node


								predictedLength = requiredLength;
								strtDetailData = (PSP_DEVICE_INTERFACE_DETAIL_DATA)malloc (predictedLength);
								strtDetailData->cbSize = sizeof (SP_DEVICE_INTERFACE_DETAIL_DATA);

								//
								// Retrieve the information from Plug and Play.
								//
								if (!SetupDiGetDeviceInterfaceDetail (
									hDevInfo,
									&strtInterfaceData,
									strtDetailData,
									predictedLength,
									&requiredLength,
									NULL)) {
										free( strtDetailData );
										
									}

								hOut = CreateFile (
									strtDetailData->DevicePath,
//									GENERIC_READ | GENERIC_WRITE,
									0,        //test for hid mouse
									FILE_SHARE_READ | FILE_SHARE_WRITE,
									NULL, // no SECURITY_ATTRIBUTES structure
									OPEN_EXISTING, // No special create flags
									0, // No special attributes
									NULL); // No template file

								if (INVALID_HANDLE_VALUE != hOut) {
									HIDD_ATTRIBUTES strtAttrib;
									strtAttrib.Size=sizeof(HIDD_ATTRIBUTES);
									if (!HidD_GetAttributes(hOut,&strtAttrib)){
										CloseHandle(hOut);

										free(strtDetailData);
									}

									char ch[40];
									sprintf_s(ch, "0x%X", strtAttrib.VendorID);
				 String^ str= System::Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)ch); 
				 
									
									textRandomData->Text = str;
	
									sprintf_s(ch, "0x%X", strtAttrib.VendorID);
				 str= System::Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)ch); 
				 
									
									textOpStatusCardTest->Text = str;
	
									
									sprintf_s(ch, "0x%X", strtAttrib.VendorID);
				 str= System::Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)ch); 
				 
									
									textSW->Text = str;			}
								free( strtDetailData );
								
							}
						}
						index++;

					}
					g_bDeviceConnected = true;
				 }
				 
				 
			 }
		 }

/*
private: System::Void __clrcall HidD_GetHidGuid(GUID* HidGuid){
			 __out  HidGuid;
		 }
*/
};
}

