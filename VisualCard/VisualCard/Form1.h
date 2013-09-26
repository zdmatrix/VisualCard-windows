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
	using namespace System::IO;

	using namespace std;


	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:

		int g_nChallangeCodeTimes;
		int g_nTextInputNum;
		int g_nTextInputIndexPre;
		int g_nTextInputIndexNow;
		int g_nBanlance;
		int g_nLogInNum;
		DWORD dwResponeSW;

		array<int^>^ g_nChallangeCode;
		array<WCHAR>^ g_cTextInput;
		array<BYTE>^ g_byImageData;
		array<BYTE>^ g_byNUM0;
		array<BYTE>^ g_byNUM1;
		array<BYTE>^ g_byNUM2;
		array<BYTE>^ g_byNUM3;
		array<BYTE>^ g_byNUM4;
		array<BYTE>^ g_byNUM5;
		array<BYTE>^ g_byNUM6;
		array<BYTE>^ g_byNUM7;
		array<BYTE>^ g_byNUM8;
		array<BYTE>^ g_byNUM9;
		array<cli::array<BYTE>^>^ g_byNUM09;
		
		array<BYTE>^ g_byORG0;
		array<BYTE>^ g_byORG1;
		array<BYTE>^ g_byORG2;
		array<BYTE>^ g_byORG3;
		array<BYTE>^ g_byORG4;
		array<BYTE>^ g_byORG5;
		array<cli::array<BYTE>^>^ g_byORG;

		array<BYTE>^ g_byKEY;
		array<BYTE>^ g_byIPTable;
		array<BYTE>^ g_byPC1Table;
		array<BYTE>^ g_byloopTable;
		array<BYTE>^ g_byPC2Table;
		array<BYTE>^ g_byETable;
		array<BYTE>^ g_byPTable;
		array<BYTE>^ g_byIPRTable;

		array<cli::array<cli::array<BYTE>^>^>^ g_bySBoxTable;
		array<cli::array<BYTE>^>^ S1;
		array<cli::array<BYTE>^>^ S2;
		array<cli::array<BYTE>^>^ S3;
		array<cli::array<BYTE>^>^ S4;
		array<cli::array<BYTE>^>^ S5;
		array<cli::array<BYTE>^>^ S6;
		array<cli::array<BYTE>^>^ S7;
		array<cli::array<BYTE>^>^ S8;

		array<BYTE>^ S10;
		array<BYTE>^ S11;
		array<BYTE>^ S12;
		array<BYTE>^ S13;

		array<BYTE>^ S20;
		array<BYTE>^ S21;
		array<BYTE>^ S22;
		array<BYTE>^ S23;

		array<BYTE>^ S30;
		array<BYTE>^ S31;
		array<BYTE>^ S32;
		array<BYTE>^ S33;

		array<BYTE>^ S40;
		array<BYTE>^ S41;
		array<BYTE>^ S42;
		array<BYTE>^ S43;

		array<BYTE>^ S50;
		array<BYTE>^ S51;
		array<BYTE>^ S52;
		array<BYTE>^ S53;

		array<BYTE>^ S60;
		array<BYTE>^ S61;
		array<BYTE>^ S62;
		array<BYTE>^ S63;

		array<BYTE>^ S70;
		array<BYTE>^ S71;
		array<BYTE>^ S72;
		array<BYTE>^ S73;

		array<BYTE>^ S80;
		array<BYTE>^ S81;
		array<BYTE>^ S82;
		array<BYTE>^ S83;


		String^ lpstrChallangeCode;
		String^ lpstrResponseCode;
		String^ lpstrAuthCode;
		String^ lpstrChargeCashInput;
		String^ lpstrConsumeCashInput;
		String^ lpstrWriteCardNumInput;
		String^ lpstrResponseCodeInput;
		String^ lpstrTransCashInput;
		String^ lpstrResponseData;
		String^ lpstrResponseSW;
		String^ lpstrRSAKey;

		BOOL g_bDeviceConnected;
		BOOL g_bTextInput;
		Boolean g_bGetBanlance;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label17;

			 //		LPCWCH APDUGETRANDOM;
			 array<BYTE^>^ g_byCmdFrame;
			 array<BYTE^>^ g_byAPDUDataBody;
			 array<BYTE^>^ g_byResponseData;

	public: 

		PSP_DEVICE_INTERFACE_DETAIL_DATA detailData;

		PHANDLE pWriteHandle;
	private: System::Windows::Forms::ImageList^  imageList1;

	private: System::Windows::Forms::PictureBox^  pictureBoxSrcAccount;

	private: System::Windows::Forms::PictureBox^  pictureBoxDstAccount;
	private: System::Windows::Forms::PictureBox^  pictureBoxTransCash;



	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label29;

	public: 
		PHANDLE pReadHandle;


		//		LPCWCH	lpcAPDUGetRandom;

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
			g_nChallangeCodeTimes = 0;
			g_nTextInputNum = 0;
			g_nTextInputIndexPre = 0;
			g_nTextInputIndexNow = 0;
			g_nBanlance = 0;
			g_nLogInNum = 0;

			g_bDeviceConnected = false;
			g_bTextInput = false;
			g_bGetBanlance = false;

			detailData = NULL;
			pWriteHandle = NULL;
			pReadHandle = NULL;

			g_byCmdFrame = gcnew array<BYTE^>(8);
			g_byResponseData = gcnew array<BYTE^>(33);
			g_cTextInput = gcnew array<WCHAR>(20);
			g_nChallangeCode = gcnew array<int^>(6);
			g_byImageData = gcnew array<BYTE>(470);
			g_byNUM0 = gcnew array<BYTE>{ 7, 1, 2, 4, 6, 5, 3, 1 };
			g_byNUM1 = gcnew array<BYTE>{ 2, 2, 6 };
			g_byNUM2 = gcnew array<BYTE>{ 6, 1, 2, 4, 3, 5, 6 };
			g_byNUM3 = gcnew array<BYTE>{ 7, 1, 2, 4, 3, 4, 6, 5 };
			g_byNUM4 = gcnew array<BYTE>{ 6, 1, 3, 4, 2, 4, 6 };
			g_byNUM5 = gcnew array<BYTE>{ 6, 2, 1, 3, 4, 6, 5 };
			g_byNUM6 = gcnew array<BYTE>{ 7, 2, 1, 3, 4, 6, 5, 3 };
			g_byNUM7 = gcnew array<BYTE>{ 3, 1, 2, 6 };
			g_byNUM8 = gcnew array<BYTE>{ 9, 1, 2, 4, 6, 5, 3, 1, 3, 4 };
			g_byNUM9 = gcnew array<BYTE>{ 7, 4, 2, 1, 3, 4, 6, 5 };
			g_byNUM09 = gcnew array<cli::array<BYTE>^>{ g_byNUM0, g_byNUM1, g_byNUM2, 
				g_byNUM3, g_byNUM4, g_byNUM5, g_byNUM6, g_byNUM7, g_byNUM8, g_byNUM9 };
			
			g_byORG0 = gcnew array<BYTE>{0, 0};
			g_byORG1 = gcnew array<BYTE>{6, 0};
			g_byORG2 = gcnew array<BYTE>{0, 6};
			g_byORG3 = gcnew array<BYTE>{6, 6};
			g_byORG4 = gcnew array<BYTE>{0, 12};
			g_byORG5 = gcnew array<BYTE>{6, 12};
			g_byORG = gcnew array<cli::array<BYTE>^>{ g_byORG0, g_byORG1, g_byORG2, 
				g_byORG3, g_byORG4, g_byORG5};

			g_byKEY = gcnew array<BYTE>{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

			g_byIPTable = gcnew array<BYTE>{
					58, 50, 42, 34, 26, 18, 10, 2, 60, 52, 44, 36, 28, 20, 12, 4,
					62, 54, 46, 38, 30, 22, 14, 6, 64, 56, 48, 40, 32, 24, 16, 8,
					57, 49, 41, 33, 25, 17,  9, 1, 59, 51, 43, 35, 27, 19, 11, 3,
					61, 53, 45, 37, 29, 21, 13, 5, 63, 55, 47, 39, 31, 23, 15, 7
			};

			g_byPC1Table = gcnew array<BYTE>{
					57, 49, 41, 33, 25, 17,  9,  1, 58, 50, 42, 34, 26, 18,
					10,  2, 59, 51, 43, 35, 27, 19, 11,  3, 60, 52, 44, 36,
					63, 55, 47, 39, 31, 23, 15,  7, 62, 54, 46, 38, 30, 22,
					14,  6, 61, 53, 45, 37, 29, 21, 13,  5, 28, 20, 12,  4
			};

			g_byloopTable = gcnew array<BYTE>{ 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1 };

			g_byPC2Table = gcnew array<BYTE>{
					14, 17, 11, 24,  1,  5,  3, 28, 15,  6, 21, 10,
					23, 19, 12,  4, 26,  8, 16,  7, 27, 20, 13,  2,
					41, 52, 31, 37, 47, 55, 30, 40, 51, 45, 33, 48,
					44, 49, 39, 56, 34, 53, 46, 42, 50, 36, 29, 32
			};

			g_byETable = gcnew array<BYTE>{
					32,  1,  2,  3,  4,  5,  4,  5,  6,  7,  8,  9,
					8,  9, 10, 11, 12, 13, 12, 13, 14, 15, 16, 17,
					16, 17, 18, 19, 20, 21, 20, 21, 22, 23, 24, 25,
					24, 25, 26, 27, 28, 29, 28, 29, 30, 31, 32,  1
			};

			g_byPTable = gcnew array<BYTE>{
					16, 7, 20, 21, 29, 12, 28, 17, 1,  15, 23, 26, 5,  18, 31, 10,
					2,  8, 24, 14, 32, 27, 3,  9,  19, 13, 30, 6,  22, 11, 4,  25
			};

			g_byIPRTable = gcnew array<BYTE>{
					40, 8, 48, 16, 56, 24, 64, 32, 39, 7, 47, 15, 55, 23, 63, 31,
					38, 6, 46, 14, 54, 22, 62, 30, 37, 5, 45, 13, 53, 21, 61, 29,
					36, 4, 44, 12, 52, 20, 60, 28, 35, 3, 43, 11, 51, 19, 59, 27,
					34, 2, 42, 10, 50, 18, 58, 26, 33, 1, 41,  9, 49, 17, 57, 25
			};

		    S10 = gcnew array<BYTE>{14, 4,	13,	 1,  2, 15, 11,  8,  3, 10,  6, 12,  5,  9,  0,  7};
			S11 = gcnew array<BYTE>{0, 15,  7,  4, 14,  2, 13,  1, 10,  6, 12, 11,  9,  5,  3,  8};
			S12 = gcnew array<BYTE>{4,  1, 14,  8, 13,  6,  2, 11, 15, 12,  9,  7,  3, 10,  5,  0};
			S13 = gcnew array<BYTE>{15, 12,  8,  2,  4,  9,  1,  7,  5, 11,  3, 14, 10,  0,  6, 13};
			S1 = gcnew array<cli::array<BYTE>^>{S10, S11, S12, S13};

			S20 = gcnew array<BYTE>{15,  1,  8, 14,  6, 11,  3,  4,  9,  7,  2, 13, 12,  0,  5, 10};
			S21 = gcnew array<BYTE>{3, 13,  4,  7, 15,  2,  8, 14, 12,  0,  1, 10,  6,  9, 11,  5};
			S22 = gcnew array<BYTE>{0, 14,  7, 11, 10,  4, 13,  1,  5,  8, 12,  6,  9,  3,  2, 15};
			S23 = gcnew array<BYTE>{13,  8, 10,  1,  3, 15,  4,  2, 11,  6,  7, 12,  0,  5, 14,  9};
			S2 = gcnew array<cli::array<BYTE>^>{S20, S21, S22, S23};

			S30 = gcnew array<BYTE>{10,  0,  9, 14,  6,  3, 15,  5,  1, 13, 12,  7, 11,  4,  2,  8};
			S31 = gcnew array<BYTE>{13,  7,  0,  9,  3,  4,  6, 10,  2,  8,  5, 14, 12, 11, 15,  1};
			S32 = gcnew array<BYTE>{13,  6,  4,  9,  8, 15,  3,  0, 11,  1,  2, 12,  5, 10, 14,  7};
			S33 = gcnew array<BYTE>{1, 10, 13,  0,  6,  9,  8,  7,  4, 15, 14,  3, 11,  5,  2, 12};
			S3 = gcnew array<cli::array<BYTE>^>{S30, S31, S32, S33};

			S40 = gcnew array<BYTE>{7, 13, 14,  3,  0,  6,  9, 10,  1,  2,  8,  5, 11, 12,  4, 15};
			S41 = gcnew array<BYTE>{13,  8, 11,  5,  6, 15,  0,  3,  4,  7,  2, 12,  1, 10, 14,  9};
			S42 = gcnew array<BYTE>{10,  6,  9,  0, 12, 11,  7, 13, 15,  1,  3, 14,  5,  2,  8,  4};
			S43 = gcnew array<BYTE>{3, 15,  0,  6, 10,  1, 13,  8,  9,  4,  5, 11, 12,  7,  2, 14};
			S4 = gcnew array<cli::array<BYTE>^>{S40, S41, S42, S43};

			S50 = gcnew array<BYTE>{2, 12,  4,  1,  7, 10, 11,  6,  8,  5,  3, 15, 13,  0, 14,  9};
			S51 = gcnew array<BYTE>{14, 11,  2, 12,  4,  7, 13,  1,  5,  0, 15, 10,  3,  9,  8,  6};
			S52 = gcnew array<BYTE>{4,  2,  1, 11, 10, 13,  7,  8, 15,  9, 12,  5,  6,  3,  0, 14};
			S53 = gcnew array<BYTE>{11,  8, 12,  7,  1, 14,  2, 13,  6, 15,  0,  9, 10,  4,  5,  3};
			S5 = gcnew array<cli::array<BYTE>^>{S50, S51, S52, S53};

			S60 = gcnew array<BYTE>{12,  1, 10, 15,  9,  2,  6,  8,  0, 13,  3,  4, 14,  7,  5, 11};
			S61 = gcnew array<BYTE>{10, 15,  4,  2,  7, 12,  9,  5,  6,  1, 13, 14,  0, 11,  3,  8};
			S62 = gcnew array<BYTE>{9, 14, 15,  5,  2,  8, 12,  3,  7,  0,  4, 10,  1, 13, 11,  6};
			S63 = gcnew array<BYTE>{4,  3,  2, 12,  9,  5, 15, 10, 11, 14,  1,  7,  6,  0,  8, 13};
			S6 = gcnew array<cli::array<BYTE>^>{S60, S61, S62, S63};

			S70 = gcnew array<BYTE>{4, 11,  2, 14, 15,  0,  8, 13,  3, 12,  9,  7,  5, 10,  6,  1};
			S71 = gcnew array<BYTE>{13,  0, 11,  7,  4,  9,  1, 10, 14,  3,  5, 12,  2, 15,  8,  6};
			S72 = gcnew array<BYTE>{1,  4, 11, 13, 12,  3,  7, 14, 10, 15,  6,  8,  0,  5,  9,  2};
			S73 = gcnew array<BYTE>{6, 11, 13,  8,  1,  4, 10,  7,  9,  5,  0, 15, 14,  2,  3, 12};
			S7 = gcnew array<cli::array<BYTE>^>{S70, S71, S72, S73};

			S80 = gcnew array<BYTE>{13,  2,  8,  4,  6, 15, 11,  1, 10,  9,  3, 14,  5,  0, 12,  7};
			S81 = gcnew array<BYTE>{1, 15, 13,  8, 10,  3,  7,  4, 12,  5,  6, 11,  0, 14,  9,  2};
			S82 = gcnew array<BYTE>{7, 11,  4,  1,  9, 12, 14,  2,  0,  6, 10, 13, 15,  3,  5,  8};
			S83 = gcnew array<BYTE>{2,  1, 14,  7,  4, 10,  8, 13, 15, 12,  9,  0,  3,  5,  6, 11};
			S8 = gcnew array<cli::array<BYTE>^>{S80, S81, S82, S83};

			g_bySBoxTable = gcnew array<cli::array<cli::array<BYTE>^>^>{S1, S2, S3, S4, S5, S6, S7, S8};

			lpstrResponseData = "";
			lpstrResponseSW = "";
			lpstrAuthCode = "";
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnWriteCard;
	private: System::Windows::Forms::Button^  btnReadCard;
	private: System::Windows::Forms::Splitter^  splitter1;
	private: System::Windows::Forms::TextBox^  textWriteCard;
	private: System::Windows::Forms::TextBox^  textRandomData;
	private: System::Windows::Forms::TextBox^  textOpStatusCardTest;
	private: System::Windows::Forms::TextBox^  textCardTestSW;


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
	private: System::Windows::Forms::TextBox^  textCharge;




	private: System::Windows::Forms::Button^  btnCounsume;
	private: System::Windows::Forms::Label^  label16;


	private: System::Windows::Forms::TextBox^  textConsume;


	private: System::Windows::Forms::Button^  btnRSAKey;
private: System::Windows::Forms::TextBox^  textBoxRSAKey;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TextBox^  textTransCash;
private: System::Windows::Forms::TextBox^  textBoxDstAccount;



	private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  textBoxSrcAccount;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;




	private: System::Windows::Forms::Button^  btnSendData;
	private: System::Windows::Forms::TextBox^  textBanlanceNewUKey;
private: System::Windows::Forms::Button^  btnUKeyBanlance;

	private: System::Windows::Forms::PictureBox^  pictureBoxAuthCode;


	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Button^  btnGenerateResponseCode;



	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  textChallangeCode;

	private: System::Windows::Forms::Button^  btnGenerateChallangeCode;
	private: System::Windows::Forms::Label^  label27;


	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::PictureBox^  pictureBoxLogIn;
	private: System::Windows::Forms::TextBox^  textResponseCode;


	private: System::Windows::Forms::Button^  btnLogIn;
	private: System::Windows::Forms::Label^  label30;
private: System::ComponentModel::IContainer^  components;






	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textCardTestSW = (gcnew System::Windows::Forms::TextBox());
			this->textOpStatusCardTest = (gcnew System::Windows::Forms::TextBox());
			this->textRandomData = (gcnew System::Windows::Forms::TextBox());
			this->textWriteCard = (gcnew System::Windows::Forms::TextBox());
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
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textConsume = (gcnew System::Windows::Forms::TextBox());
			this->btnCounsume = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->btnCharge = (gcnew System::Windows::Forms::Button());
			this->textCharge = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBanlanceElecMoney = (gcnew System::Windows::Forms::TextBox());
			this->btnBanlance = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxSrcAccount = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxDstAccount = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTransCash = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxAuthCode = (gcnew System::Windows::Forms::PictureBox());
			this->textBanlanceNewUKey = (gcnew System::Windows::Forms::TextBox());
			this->btnUKeyBanlance = (gcnew System::Windows::Forms::Button());
			this->btnSendData = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textTransCash = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDstAccount = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxSrcAccount = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btnRSAKey = (gcnew System::Windows::Forms::Button());
			this->textBoxRSAKey = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxLogIn = (gcnew System::Windows::Forms::PictureBox());
			this->textResponseCode = (gcnew System::Windows::Forms::TextBox());
			this->btnLogIn = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->btnGenerateResponseCode = (gcnew System::Windows::Forms::Button());
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
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxSrcAccount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxDstAccount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxTransCash))->BeginInit();
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
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
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
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textCardTestSW);
			this->tabPage1->Controls->Add(this->textOpStatusCardTest);
			this->tabPage1->Controls->Add(this->textRandomData);
			this->tabPage1->Controls->Add(this->textWriteCard);
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
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(560, 363);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"卡测试";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 305);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 14);
			this->label7->TabIndex = 16;
			this->label7->Text = L"返回SW";
			// 
			// textCardTestSW
			// 
			this->textCardTestSW->Location = System::Drawing::Point(84, 302);
			this->textCardTestSW->Name = L"textCardTestSW";
			this->textCardTestSW->ReadOnly = true;
			this->textCardTestSW->Size = System::Drawing::Size(240, 23);
			this->textCardTestSW->TabIndex = 15;
			this->textCardTestSW->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textCardTestSW->TextChanged += gcnew System::EventHandler(this, &Form1::textCardTestSW_TextChanged);
			// 
			// textOpStatusCardTest
			// 
			this->textOpStatusCardTest->Location = System::Drawing::Point(84, 266);
			this->textOpStatusCardTest->Name = L"textOpStatusCardTest";
			this->textOpStatusCardTest->ReadOnly = true;
			this->textOpStatusCardTest->Size = System::Drawing::Size(240, 23);
			this->textOpStatusCardTest->TabIndex = 14;
			this->textOpStatusCardTest->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textOpStatusCardTest->TextChanged += gcnew System::EventHandler(this, &Form1::textOpStatusCardTest_TextChanged);
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
			this->textWriteCard->TextChanged += gcnew System::EventHandler(this, &Form1::textWriteCard_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 14);
			this->label6->TabIndex = 9;
			this->label6->Text = L"操作状态";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(6, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"三 操作状态及返回数据";
			// 
			// btnWriteCard
			// 
			this->btnWriteCard->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnWriteCard->Location = System::Drawing::Point(229, 175);
			this->btnWriteCard->Name = L"btnWriteCard";
			this->btnWriteCard->Size = System::Drawing::Size(95, 23);
			this->btnWriteCard->TabIndex = 7;
			this->btnWriteCard->Text = L"写卡";
			this->btnWriteCard->UseVisualStyleBackColor = true;
			this->btnWriteCard->Click += gcnew System::EventHandler(this, &Form1::btnWriteCard_Click);
			// 
			// btnReadCard
			// 
			this->btnReadCard->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnReadCard->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnReadCard->Location = System::Drawing::Point(229, 140);
			this->btnReadCard->Name = L"btnReadCard";
			this->btnReadCard->Size = System::Drawing::Size(95, 23);
			this->btnReadCard->TabIndex = 6;
			this->btnReadCard->Text = L"读8字节随机数";
			this->btnReadCard->UseVisualStyleBackColor = true;
			this->btnReadCard->Click += gcnew System::EventHandler(this, &Form1::btnReadCard_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(6, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"二 读写卡操作";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::LightGray;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
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
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(6, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"一 卡状态检测";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// btnPowerUp
			// 
			this->btnPowerUp->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnPowerUp->Location = System::Drawing::Point(249, 56);
			this->btnPowerUp->Name = L"btnPowerUp";
			this->btnPowerUp->Size = System::Drawing::Size(75, 23);
			this->btnPowerUp->TabIndex = 2;
			this->btnPowerUp->Text = L"卡上电复位";
			this->btnPowerUp->UseVisualStyleBackColor = true;
			// 
			// btnPowerDown
			// 
			this->btnPowerDown->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->btnPowerDown->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnPowerDown->Location = System::Drawing::Point(133, 56);
			this->btnPowerDown->Name = L"btnPowerDown";
			this->btnPowerDown->Size = System::Drawing::Size(75, 23);
			this->btnPowerDown->TabIndex = 1;
			this->btnPowerDown->Text = L"卡掉电";
			this->btnPowerDown->UseVisualStyleBackColor = true;
			// 
			// btnProbeCard
			// 
			this->btnProbeCard->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnProbeCard->Location = System::Drawing::Point(9, 56);
			this->btnProbeCard->Name = L"btnProbeCard";
			this->btnProbeCard->Size = System::Drawing::Size(75, 23);
			this->btnProbeCard->TabIndex = 0;
			this->btnProbeCard->Text = L"探卡";
			this->btnProbeCard->UseVisualStyleBackColor = true;
			this->btnProbeCard->Click += gcnew System::EventHandler(this, &Form1::btnProbeCard_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->textConsume);
			this->tabPage2->Controls->Add(this->btnCounsume);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->btnCharge);
			this->tabPage2->Controls->Add(this->textCharge);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->textBanlanceElecMoney);
			this->tabPage2->Controls->Add(this->btnBanlance);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(560, 363);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"电子现金";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 234);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(96, 16);
			this->label17->TabIndex = 17;
			this->label17->Text = L"三 查询余额";
			// 
			// textConsume
			// 
			this->textConsume->Location = System::Drawing::Point(71, 170);
			this->textConsume->Name = L"textConsume";
			this->textConsume->Size = System::Drawing::Size(158, 26);
			this->textConsume->TabIndex = 13;
			this->textConsume->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textConsume->TextChanged += gcnew System::EventHandler(this, &Form1::textConsume_TextChanged);
			// 
			// btnCounsume
			// 
			this->btnCounsume->Location = System::Drawing::Point(237, 170);
			this->btnCounsume->Name = L"btnCounsume";
			this->btnCounsume->Size = System::Drawing::Size(91, 23);
			this->btnCounsume->TabIndex = 12;
			this->btnCounsume->Text = L"消费";
			this->btnCounsume->UseVisualStyleBackColor = true;
			this->btnCounsume->Click += gcnew System::EventHandler(this, &Form1::btnCounsume_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 131);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(64, 16);
			this->label16->TabIndex = 11;
			this->label16->Text = L"二 消费";
			// 
			// btnCharge
			// 
			this->btnCharge->Location = System::Drawing::Point(238, 78);
			this->btnCharge->Name = L"btnCharge";
			this->btnCharge->Size = System::Drawing::Size(90, 23);
			this->btnCharge->TabIndex = 10;
			this->btnCharge->Text = L"充值";
			this->btnCharge->UseVisualStyleBackColor = true;
			this->btnCharge->Click += gcnew System::EventHandler(this, &Form1::btnCharge_Click);
			// 
			// textCharge
			// 
			this->textCharge->Location = System::Drawing::Point(71, 78);
			this->textCharge->Name = L"textCharge";
			this->textCharge->Size = System::Drawing::Size(158, 26);
			this->textCharge->TabIndex = 9;
			this->textCharge->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textCharge->TextChanged += gcnew System::EventHandler(this, &Form1::textCharge_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 37);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(64, 16);
			this->label15->TabIndex = 8;
			this->label15->Text = L"一 充值";
			// 
			// textBanlanceElecMoney
			// 
			this->textBanlanceElecMoney->Location = System::Drawing::Point(71, 266);
			this->textBanlanceElecMoney->Name = L"textBanlanceElecMoney";
			this->textBanlanceElecMoney->ReadOnly = true;
			this->textBanlanceElecMoney->Size = System::Drawing::Size(158, 26);
			this->textBanlanceElecMoney->TabIndex = 7;
			this->textBanlanceElecMoney->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBanlanceElecMoney->TextChanged += gcnew System::EventHandler(this, &Form1::textBanlanceElecMoney_TextChanged);
			// 
			// btnBanlance
			// 
			this->btnBanlance->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnBanlance->Location = System::Drawing::Point(237, 266);
			this->btnBanlance->Name = L"btnBanlance";
			this->btnBanlance->Size = System::Drawing::Size(91, 23);
			this->btnBanlance->TabIndex = 6;
			this->btnBanlance->Text = L"查询余额";
			this->btnBanlance->UseVisualStyleBackColor = true;
			this->btnBanlance->Click += gcnew System::EventHandler(this, &Form1::btnBanlance_Click);
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label14->BackColor = System::Drawing::Color::LightGray;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(335, 8);
			this->label14->Margin = System::Windows::Forms::Padding(5);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(220, 350);
			this->label14->TabIndex = 5;
			this->label14->Text = L"\r\n操作说明：\r\n\r\n一 充值\r\n\r\n   输入充值金额，单击“充值”按钮，\r\n   可视卡屏幕上显示充值金额，确认无\r\n   误后根据操作提示完成充值。\r\n\r\n" 
				L"二 消费\r\n\r\n   输入消费金额，单击“消费”按钮，\r\n   可视卡屏幕上显示充值金额，确认无\r\n   误后根据操作提示完成充值。\r\n\r\n三 查询余额\r\n\r\n" 
				L"   单击“查询余额”按钮读取卡中余额";
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->label32);
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->pictureBoxSrcAccount);
			this->tabPage3->Controls->Add(this->pictureBoxDstAccount);
			this->tabPage3->Controls->Add(this->pictureBoxTransCash);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->pictureBoxAuthCode);
			this->tabPage3->Controls->Add(this->textBanlanceNewUKey);
			this->tabPage3->Controls->Add(this->btnUKeyBanlance);
			this->tabPage3->Controls->Add(this->btnSendData);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->textTransCash);
			this->tabPage3->Controls->Add(this->textBoxDstAccount);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->textBoxSrcAccount);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->btnRSAKey);
			this->tabPage3->Controls->Add(this->textBoxRSAKey);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(560, 363);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"二代UKey";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label33->Location = System::Drawing::Point(19, 318);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(49, 14);
			this->label33->TabIndex = 34;
			this->label33->Text = L"认证码";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label32->Location = System::Drawing::Point(19, 284);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(63, 14);
			this->label32->TabIndex = 33;
			this->label32->Text = L"转账金额";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label29->Location = System::Drawing::Point(19, 250);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(63, 14);
			this->label29->TabIndex = 32;
			this->label29->Text = L"目的账户";
			// 
			// pictureBoxSrcAccount
			// 
			this->pictureBoxSrcAccount->Location = System::Drawing::Point(87, 202);
			this->pictureBoxSrcAccount->Name = L"pictureBoxSrcAccount";
			this->pictureBoxSrcAccount->Size = System::Drawing::Size(237, 35);
			this->pictureBoxSrcAccount->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxSrcAccount->TabIndex = 31;
			this->pictureBoxSrcAccount->TabStop = false;
			// 
			// pictureBoxDstAccount
			// 
			this->pictureBoxDstAccount->Location = System::Drawing::Point(87, 236);
			this->pictureBoxDstAccount->Name = L"pictureBoxDstAccount";
			this->pictureBoxDstAccount->Size = System::Drawing::Size(237, 35);
			this->pictureBoxDstAccount->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxDstAccount->TabIndex = 30;
			this->pictureBoxDstAccount->TabStop = false;
			this->pictureBoxDstAccount->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// pictureBoxTransCash
			// 
			this->pictureBoxTransCash->Location = System::Drawing::Point(87, 270);
			this->pictureBoxTransCash->Name = L"pictureBoxTransCash";
			this->pictureBoxTransCash->Size = System::Drawing::Size(237, 35);
			this->pictureBoxTransCash->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxTransCash->TabIndex = 29;
			this->pictureBoxTransCash->TabStop = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label25->Location = System::Drawing::Point(19, 216);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(49, 14);
			this->label25->TabIndex = 28;
			this->label25->Text = L"源账户";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(152, 183);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(104, 16);
			this->label18->TabIndex = 27;
			this->label18->Text = L"卡处理后数据";
			// 
			// pictureBoxAuthCode
			// 
			this->pictureBoxAuthCode->Location = System::Drawing::Point(87, 304);
			this->pictureBoxAuthCode->Name = L"pictureBoxAuthCode";
			this->pictureBoxAuthCode->Size = System::Drawing::Size(237, 35);
			this->pictureBoxAuthCode->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
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
			// btnUKeyBanlance
			// 
			this->btnUKeyBanlance->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnUKeyBanlance->Location = System::Drawing::Point(344, 21);
			this->btnUKeyBanlance->Name = L"btnUKeyBanlance";
			this->btnUKeyBanlance->Size = System::Drawing::Size(91, 23);
			this->btnUKeyBanlance->TabIndex = 23;
			this->btnUKeyBanlance->Text = L"查询余额";
			this->btnUKeyBanlance->UseVisualStyleBackColor = true;
			this->btnUKeyBanlance->Click += gcnew System::EventHandler(this, &Form1::btnUKeyBanlance_Click);
			// 
			// btnSendData
			// 
			this->btnSendData->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnSendData->Location = System::Drawing::Point(249, 102);
			this->btnSendData->Name = L"btnSendData";
			this->btnSendData->Size = System::Drawing::Size(75, 47);
			this->btnSendData->TabIndex = 19;
			this->btnSendData->Text = L"提交数据给可视卡";
			this->btnSendData->UseVisualStyleBackColor = true;
			this->btnSendData->Click += gcnew System::EventHandler(this, &Form1::btnSendData_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label24->Location = System::Drawing::Point(19, 150);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(63, 14);
			this->label24->TabIndex = 18;
			this->label24->Text = L"转账金额";
			// 
			// textTransCash
			// 
			this->textTransCash->Location = System::Drawing::Point(87, 145);
			this->textTransCash->Name = L"textTransCash";
			this->textTransCash->Size = System::Drawing::Size(142, 26);
			this->textTransCash->TabIndex = 17;
			this->textTransCash->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textTransCash->TextChanged += gcnew System::EventHandler(this, &Form1::textTransCash_TextChanged);
			// 
			// textBoxDstAccount
			// 
			this->textBoxDstAccount->Location = System::Drawing::Point(87, 113);
			this->textBoxDstAccount->Name = L"textBoxDstAccount";
			this->textBoxDstAccount->ReadOnly = true;
			this->textBoxDstAccount->Size = System::Drawing::Size(142, 26);
			this->textBoxDstAccount->TabIndex = 16;
			this->textBoxDstAccount->Text = L"1023456789";
			this->textBoxDstAccount->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxDstAccount->TextChanged += gcnew System::EventHandler(this, &Form1::textBox10_TextChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label23->Location = System::Drawing::Point(18, 118);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(63, 14);
			this->label23->TabIndex = 15;
			this->label23->Text = L"目的账户";
			// 
			// textBoxSrcAccount
			// 
			this->textBoxSrcAccount->Location = System::Drawing::Point(87, 81);
			this->textBoxSrcAccount->Name = L"textBoxSrcAccount";
			this->textBoxSrcAccount->ReadOnly = true;
			this->textBoxSrcAccount->Size = System::Drawing::Size(142, 26);
			this->textBoxSrcAccount->TabIndex = 14;
			this->textBoxSrcAccount->Text = L"1234567890";
			this->textBoxSrcAccount->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(19, 86);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(49, 14);
			this->label22->TabIndex = 13;
			this->label22->Text = L"源账户";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label21->Location = System::Drawing::Point(6, 62);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(56, 14);
			this->label21->TabIndex = 12;
			this->label21->Text = L"二 转账";
			// 
			// btnRSAKey
			// 
			this->btnRSAKey->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnRSAKey->Location = System::Drawing::Point(21, 27);
			this->btnRSAKey->Name = L"btnRSAKey";
			this->btnRSAKey->Size = System::Drawing::Size(60, 23);
			this->btnRSAKey->TabIndex = 11;
			this->btnRSAKey->Text = L"取公钥";
			this->btnRSAKey->UseVisualStyleBackColor = true;
			this->btnRSAKey->Click += gcnew System::EventHandler(this, &Form1::btnRSAKey_Click);
			// 
			// textBoxRSAKey
			// 
			this->textBoxRSAKey->Location = System::Drawing::Point(87, 24);
			this->textBoxRSAKey->Name = L"textBoxRSAKey";
			this->textBoxRSAKey->ReadOnly = true;
			this->textBoxRSAKey->Size = System::Drawing::Size(237, 26);
			this->textBoxRSAKey->TabIndex = 10;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label20->Location = System::Drawing::Point(6, 5);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(105, 14);
			this->label20->TabIndex = 9;
			this->label20->Text = L"一 生成RSA公钥";
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label19->BackColor = System::Drawing::Color::LightGray;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(332, 62);
			this->label19->Margin = System::Windows::Forms::Padding(5);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(220, 293);
			this->label19->TabIndex = 6;
			this->label19->Text = L"\r\n操作说明：\r\n\r\n一 生成RSA公钥\r\n\r\n   利用可视卡上SE模块生成RSA公私\r\n   钥对，并显示公钥\r\n\r\n二 转账\r\n\r\n   将源账户，目的账户" 
				L"及转账金额信息\r\n   送可视卡，可视卡生成一认证码并显\r\n   示在可视卡上，同时回传经过卡上SE\r\n   模块处理后的交易信息，两边确认后\r\n   完成交易" 
				L"\r\n\r\n三 查询余额\r\n\r\n   单击“查询余额”按钮读取卡中余额\r\n";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label31);
			this->tabPage4->Controls->Add(this->pictureBoxLogIn);
			this->tabPage4->Controls->Add(this->textResponseCode);
			this->tabPage4->Controls->Add(this->btnLogIn);
			this->tabPage4->Controls->Add(this->label30);
			this->tabPage4->Controls->Add(this->btnGenerateResponseCode);
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
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label31->Location = System::Drawing::Point(7, 300);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(0, 14);
			this->label31->TabIndex = 21;
			// 
			// pictureBoxLogIn
			// 
			this->pictureBoxLogIn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxLogIn.Image")));
			this->pictureBoxLogIn->Location = System::Drawing::Point(10, 192);
			this->pictureBoxLogIn->Name = L"pictureBoxLogIn";
			this->pictureBoxLogIn->Size = System::Drawing::Size(302, 163);
			this->pictureBoxLogIn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLogIn->TabIndex = 20;
			this->pictureBoxLogIn->TabStop = false;
			this->pictureBoxLogIn->Visible = false;
			this->pictureBoxLogIn->Click += gcnew System::EventHandler(this, &Form1::pictureBoxLogIn_Click);
			// 
			// textResponseCode
			// 
			this->textResponseCode->Location = System::Drawing::Point(10, 160);
			this->textResponseCode->Name = L"textResponseCode";
			this->textResponseCode->ReadOnly = true;
			this->textResponseCode->Size = System::Drawing::Size(201, 26);
			this->textResponseCode->TabIndex = 19;
			this->textResponseCode->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textResponseCode->TextChanged += gcnew System::EventHandler(this, &Form1::textResponseCode_TextChanged);
			// 
			// btnLogIn
			// 
			this->btnLogIn->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnLogIn->Location = System::Drawing::Point(217, 162);
			this->btnLogIn->Name = L"btnLogIn";
			this->btnLogIn->Size = System::Drawing::Size(95, 23);
			this->btnLogIn->TabIndex = 18;
			this->btnLogIn->Text = L"登录";
			this->btnLogIn->UseVisualStyleBackColor = true;
			this->btnLogIn->Click += gcnew System::EventHandler(this, &Form1::btnLogIn_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label30->Location = System::Drawing::Point(7, 143);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(56, 14);
			this->label30->TabIndex = 17;
			this->label30->Text = L"三 登录";
			// 
			// btnGenerateResponseCode
			// 
			this->btnGenerateResponseCode->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnGenerateResponseCode->Location = System::Drawing::Point(71, 109);
			this->btnGenerateResponseCode->Name = L"btnGenerateResponseCode";
			this->btnGenerateResponseCode->Size = System::Drawing::Size(180, 23);
			this->btnGenerateResponseCode->TabIndex = 15;
			this->btnGenerateResponseCode->Text = L"生成应答码";
			this->btnGenerateResponseCode->UseVisualStyleBackColor = true;
			this->btnGenerateResponseCode->Click += gcnew System::EventHandler(this, &Form1::btnGenerateResponseCode_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label28->Location = System::Drawing::Point(7, 92);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(98, 14);
			this->label28->TabIndex = 14;
			this->label28->Text = L"二 生成应答码";
			// 
			// textChallangeCode
			// 
			this->textChallangeCode->Location = System::Drawing::Point(111, 47);
			this->textChallangeCode->Name = L"textChallangeCode";
			this->textChallangeCode->ReadOnly = true;
			this->textChallangeCode->Size = System::Drawing::Size(201, 26);
			this->textChallangeCode->TabIndex = 13;
			this->textChallangeCode->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textChallangeCode->TextChanged += gcnew System::EventHandler(this, &Form1::textChallangeCode_TextChanged);
			// 
			// btnGenerateChallangeCode
			// 
			this->btnGenerateChallangeCode->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->btnGenerateChallangeCode->Location = System::Drawing::Point(9, 47);
			this->btnGenerateChallangeCode->Name = L"btnGenerateChallangeCode";
			this->btnGenerateChallangeCode->Size = System::Drawing::Size(95, 23);
			this->btnGenerateChallangeCode->TabIndex = 12;
			this->btnGenerateChallangeCode->Text = L"获得挑战码";
			this->btnGenerateChallangeCode->UseVisualStyleBackColor = true;
			this->btnGenerateChallangeCode->Click += gcnew System::EventHandler(this, &Form1::btnGenerateChallangeCode_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label27->Location = System::Drawing::Point(7, 17);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(98, 14);
			this->label27->TabIndex = 10;
			this->label27->Text = L"一 获得挑战码";
			// 
			// label26
			// 
			this->label26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label26->BackColor = System::Drawing::Color::LightGray;
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label26->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
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
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(9, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"连接设备";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// comboBoxDevice
			// 
			this->comboBoxDevice->FormattingEnabled = true;
			this->comboBoxDevice->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"无", L"HED VisualCard Adaptor-USB"});
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
			this->label8->Text = L"返回SW";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 251);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 14);
			this->label9->TabIndex = 9;
			this->label9->Text = L"操作状态";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(12, 214);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(176, 16);
			this->label10->TabIndex = 8;
			this->label10->Text = L"三 操作状态及返回数据";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(194, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"写卡";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(194, 126);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"读卡";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(6, 100);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(112, 16);
			this->label11->TabIndex = 5;
			this->label11->Text = L"二 读写卡操作";
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
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(6, 23);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(112, 16);
			this->label13->TabIndex = 3;
			this->label13->Text = L"一 卡状态检测";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(214, 56);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"卡上电复位";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(113, 56);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"卡掉电";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(9, 56);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 0;
			this->button5->Text = L"探卡";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"hed.png");
			this->imageList1->Images->SetKeyName(1, L"程序猿1.jpg");
			this->imageList1->Images->SetKeyName(2, L"2.jpg");
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(592, 446);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->comboBoxDevice);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"多功能可视IC卡演示系统";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxSrcAccount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxDstAccount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxTransCash))->EndInit();
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

	private: System::Byte* lpbyteConvert_String2Byte(String^ strCmdFrame, Boolean bContinus){

				 array<WCHAR>^ ch = strCmdFrame->ToCharArray();
				 BYTE bTmp = 0;
				 LPBYTE lpCmdFrame = (LPBYTE)malloc(strCmdFrame->Length / 2 + 3);
				 for(int i = 0; i < ch->Length; i ++){
					 if(ch[i] < 'a' && ch[i] >= 'A'){
						 ch[i] -= 0x37;		//char ch = 'A', (int)ch = 0x41, A->Hex = 0x0A = (Dec)10, 0x41 - 0x0A = 0x37
					 }
					 if(ch[i] >= 'a'){
						 ch[i] -= 0x57;		//char ch = 'a', (int)ch = 0x61, a->Hex = 0x0A = (Dec)10, 0x61 - 0x0A = 0x57
					 }
					 if(i % 2){

						 bTmp |= (ch[i] & 0x0f);
						 *(lpCmdFrame + (i / 2 + 3)) = bTmp;
						 bTmp = 0;
					 }else{

						 bTmp |= ((ch[i] << 4) & 0xf0);
					 }

				 }


				 *lpCmdFrame = (BYTE)0x00;       //报告ID，必须为0
				 if(!bContinus){
					 *(lpCmdFrame + 1) = (BYTE)0x04;
				 }          //指令类型码，04为APDU指令处理
				 else{
					 *(lpCmdFrame + 1) = (BYTE)0x84;
				 }
				 *(lpCmdFrame + 2) = (BYTE)(strCmdFrame->Length / 2);		//下发数据长度

				 return lpCmdFrame;
			 }

	private: System::String^ lpstrConvert_TextInput(String^ lpstrTextInput){
				 const char* lpcTmp = (char*)(System::Runtime::InteropServices::
					 Marshal::StringToHGlobalAnsi(lpstrTextInput)).ToPointer();

				 string strTmp = lpcTmp;

				 int nTmp = atoi(strTmp.c_str());
				 String^ str = nTmp.ToString("X");
				 if(str->Length % 2){
					 str = "0" + str;
				 }
				 lpstrTextInput = "";
				 return str;
			 }


	private: System::Boolean bDisplayNumOnCard(String^ lsptrNum){

				 
				 Boolean bRet = false;
/*				 
				 int len = 0;
				 if(lsptrNum->Length > 9){
					len = lsptrNum->Length / 2;
				 }
				 else{
					len = lsptrNum->Length;
				 }
*/
				 String^ strCmdFrame = "80bf01000" + lsptrNum->Length.ToString();
				 const char* input = (char*)(System::Runtime::InteropServices::
					 Marshal::StringToHGlobalAnsi(lsptrNum)).ToPointer();
				 for(int i = 0; i < lsptrNum->Length; i ++){
					 int n = *(input + i);
					 strCmdFrame += n.ToString("X2");
				 }
				 LPBYTE lpCmdFrame = lpbyteConvert_String2Byte(strCmdFrame, false);
				 if(bWrite_ToHIDDevice(pWriteHandle, lpCmdFrame)){
					 if((dwResponeSW = dwRead_FromHIDDevice(pReadHandle, g_byResponseData, 0x00)) == 0x9000){
						 bRet = true;	
					 }
				 }
				 return bRet;
			 }

	private: System::Void btnWriteCard_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(g_bDeviceConnected && (lpstrWriteCardNumInput != nullptr)){
					 if(bDisplayNumOnCard(lpstrWriteCardNumInput)){
						 textOpStatusCardTest->Text = "写卡数据操作成功";
					 }
					 textCardTestSW->Text = dwResponeSW.ToString("X2");

				 }
				 else if(!g_bDeviceConnected){
					 MessageBox::Show("请先连接USB设备....");
				 }
				 else{
					 MessageBox::Show("请输入需要在卡上显示的数字....\n\r");
				 }
			 }

	private: System::String^ strReadRandomNum(){

				 String^ strAPDUCmd = "0084000008";
				 lpstrResponseData = "";
				 LPBYTE lpCmdFrame = lpbyteConvert_String2Byte(strAPDUCmd, false);
				 if(bWrite_ToHIDDevice(pWriteHandle, lpCmdFrame)){
					 if((dwResponeSW = dwRead_FromHIDDevice(pReadHandle, g_byResponseData, 0x08)) == 0x9000){

						 for(int i = 0; i < 0x08; i ++){

							 String^ str = (*g_byResponseData[i]).ToString("X2");

							 lpstrResponseData += str;
						 }

					 }

				 }
				 return lpstrResponseData;
			 }


	private: System::String^ strGetAuthCode(){


				 String^ strAPDUCmd = "80bf080000";
				 String^ lpstrTmp = "";
				 LPBYTE lpCmdFrame = lpbyteConvert_String2Byte(strAPDUCmd, false);
				 if(bWrite_ToHIDDevice(pWriteHandle, lpCmdFrame)){
					 while((dwResponeSW = dwRead_FromHIDDevice(pReadHandle, g_byResponseData, 0x00)) != 0x9000){
						;
					 }
						 strAPDUCmd = "00c0000006";
						 lpCmdFrame = lpbyteConvert_String2Byte(strAPDUCmd, true);
						 if(bWrite_ToHIDDevice(pWriteHandle, lpCmdFrame)){
							 if((dwResponeSW = dwRead_FromHIDDevice(pReadHandle, g_byResponseData, 0x06)) == 0x9000){
								 for(int i = 0; i < 0x06; i ++){

									 int n = *g_byResponseData[i] - 0x30;
									 String^ str = n.ToString();

									 lpstrTmp += str;
									 
								 }
								 
							 }

						 }

//					 }					 

				 }
				 return lpstrTmp;
			 }

	private: System::Void btnReadCard_Click(System::Object^  sender, System::EventArgs^  e) {

				 String^ strAPDUCmd = "0084000008";
				 LPBYTE lpCmdFrame;

				 if(g_bDeviceConnected){
					 textRandomData->Text = strReadRandomNum();

					 textCardTestSW->Text = dwResponeSW.ToString("X2");
					 textOpStatusCardTest->Text = "取随机数操作成功";
				 }
				 else{
					 MessageBox::Show("请先连接USB设备");
				 }

			 }


	private: System::Boolean bSelectFile(){
				 Boolean	bret = false;
				 String^ strAPDUCmd = "00a4000002";
				 String^ strFileId = "00bf";
				 strAPDUCmd += strFileId;
				 LPBYTE lpCmdFrame = lpbyteConvert_String2Byte(strAPDUCmd, false);
				 if(bWrite_ToHIDDevice(pWriteHandle, lpCmdFrame)){
					 if((dwResponeSW = dwRead_FromHIDDevice(pReadHandle, g_byResponseData, 0x00)) == 0x9000){
						 bret = true;
					 }
				 }
				 return bret;
			 }
	private: System::Void btnBanlance_Click(System::Object^  sender, System::EventArgs^  e) {

				 if(g_bDeviceConnected){		 
					 if((g_nBanlance = nReadBanlance()) >= 0){
						 textBanlanceElecMoney->Text = g_nBanlance.ToString();
					 }
					 else{
						 textBanlanceElecMoney->Text = "取余额操作错误....";
					 }
				 }
				 else{
					 MessageBox::Show("请先连接USB设备");
				 }


			 }

	private: System::Int32 nReadBanlance(){
				 int val;
				 if(bSelectFile()){
					 String^ strAPDUCmd = "00b0000004";
					 LPBYTE lpCmdFrame = lpbyteConvert_String2Byte(strAPDUCmd, true);
					 if(bWrite_ToHIDDevice(pWriteHandle, lpCmdFrame)){
						 if((dwResponeSW = dwRead_FromHIDDevice(pReadHandle, g_byResponseData, 0x04)) == 0x9000){
							 for(int i = 0; i < 0x04; i ++){
								 String^ str = (*g_byResponseData[i]).ToString("X2");
								 lpstrResponseData += str;
							 }

							 const char* input = (char*)(System::Runtime::InteropServices::
								 Marshal::StringToHGlobalAnsi(lpstrResponseData)).ToPointer();
							 sscanf_s(input, "%x", &val);
							 g_bGetBanlance = true;		
						 }	
					 }else{
						 val = -1;
					 }
				 }else{
					 val = -1;
				 }

				 return val;
			 }

	private: System::Boolean bUpdataBanlance(int nBanlance){

				 Boolean bRet = false;
				 if(bSelectFile()){
					 String^ strAPDUCmd = "00d6000004";
					 String^ strBanlance = nBanlance.ToString("X8");

					 LPBYTE lpCmdFrame = lpbyteConvert_String2Byte(strAPDUCmd + strBanlance, true);
					 if(bWrite_ToHIDDevice(pWriteHandle, lpCmdFrame)){
						 if((dwResponeSW = dwRead_FromHIDDevice(pReadHandle, g_byResponseData, 0x00)) == 0x9000){
							 bRet = true;
						 }	
					 }
				 }
				 return bRet;

			 }


	private: System::Void textRandomData_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void textBanlanceElecMoney_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBanlanceNewUKey_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void pictureBoxAuthCode_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btnLogIn_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(lpstrResponseCodeInput->Equals(lpstrResponseCode)){
					 
					 if(g_nLogInNum < INT_MAX){
						g_nLogInNum ++;
					 }
					 else{
						g_nLogInNum = 0;
					 }
					 Sleep(500);
					 pictureBoxLogIn->Visible = true;
					 pictureBoxLogIn->Image = imageList1->Images[g_nLogInNum % 3];
					 MessageBox::Show("登录成功！");
					 
				 }


			 }
	private: System::Void pictureBoxLogIn_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btnGenerateChallangeCode_Click(System::Object^  sender, System::EventArgs^  e) {


				 char ch[20];
				 Random^ fixRandom = gcnew Random;

				 if(g_bDeviceConnected){
					 lpstrChallangeCode = "";
					 for(int i= 0; i < 6; i ++){
						 g_nChallangeCode[i] = fixRandom->Next(10);
						 sprintf_s(ch, "%d", *g_nChallangeCode[i]);
						 String^ str= System::Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)ch); 
						 lpstrChallangeCode += str;

					 }
					 textChallangeCode->Text = lpstrChallangeCode;

					 //			 textOPStatusOTP->Text = "生成挑战码成功";	
				 }else{
					 MessageBox::Show("请先连接USB设备");
				 }
			 }

	private: System::Void textChallangeCode_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }


	private: System::Void textOPStatusOTP_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void comboBoxDevice_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 if(comboBoxDevice -> SelectedItem == "HED VisualCard Adaptor-USB"){

					 if(bOpenHidDevice(0x1677, 0x0340)){
						 g_bDeviceConnected = true;
						 pWriteHandle = (PHANDLE)malloc(sizeof(HANDLE));
						 pReadHandle = (PHANDLE)malloc(sizeof(HANDLE));
						 if(bInitWriteHandle(detailData, pWriteHandle) && bInitReadHandle(detailData, pReadHandle)){	 
							 MessageBox::Show("查找USB设备成功!\r\n");
							 //初始化Write句柄成功!\r\n初始化Read句柄成功!\r\n
						 }


					 }else{
						 MessageBox::Show("找不到指定USB设备!\r\n请检查是否插入USB设备！\r\n");
					 }
				 }				 

			 }


			 bool bInitWriteHandle(PSP_DEVICE_INTERFACE_DETAIL_DATA detailData, PHANDLE pWriteHandle){

				 *pWriteHandle = CreateFile( 
					 detailData->DevicePath,
					 GENERIC_WRITE,
					 FILE_SHARE_READ | FILE_SHARE_WRITE,
					 (LPSECURITY_ATTRIBUTES)NULL,
					 OPEN_EXISTING,
					 0,						//for write
					 NULL);

				 if(*pWriteHandle != INVALID_HANDLE_VALUE){
					 return true;
				 }else{
					 return false;
				 }
			 }

			 bool bInitReadHandle(PSP_DEVICE_INTERFACE_DETAIL_DATA detailData, PHANDLE pReadHandle){

				 *pReadHandle = CreateFile( 
					 detailData->DevicePath,
					 GENERIC_READ,
					 FILE_SHARE_READ | FILE_SHARE_WRITE,
					 (LPSECURITY_ATTRIBUTES)NULL,
					 OPEN_EXISTING,
					 FILE_FLAG_OVERLAPPED,						//for read

					 NULL);

				 if(*pReadHandle != INVALID_HANDLE_VALUE){
					 return true;
				 }else{
					 return false;
				 }
			 }


			 bool bWrite_ToHIDDevice(PHANDLE pWriteHandle, LPBYTE lpWriteBuff){

				 DWORD			dwNumberOfBytesWrite;
				 HIDP_CAPS		Capabilities;
				 PHIDP_PREPARSED_DATA		HidParsedData;

				 BOOL bResult = false;

				 if(*pWriteHandle != NULL){
					 HidD_GetPreparsedData(*pWriteHandle, &HidParsedData);

					 /* extract the capabilities info */
					 HidP_GetCaps( HidParsedData ,&Capabilities);

					 /* Free the memory allocated when getting the preparsed data */
					 HidD_FreePreparsedData(HidParsedData);

					 bResult = WriteFile(*pWriteHandle, 
						 lpWriteBuff, 
						 Capabilities.OutputReportByteLength, 
						 &dwNumberOfBytesWrite,
						 NULL);


				 }
				 return bResult;

			 }


			 DWORD dwRead_FromHIDDevice(PHANDLE pReadHandle, array<BYTE^>^ byReadBuff, DWORD len){

				 DWORD			dwNumberOfBytesRead;
				 DWORD			dwResponseSW = 0;
				 HIDP_CAPS		Capabilities;
				 PHIDP_PREPARSED_DATA		HidParsedData;
				 OVERLAPPED		HidOverlapped;
				 HANDLE			hEvent;

				 LPBYTE	 lpReadBuff = (LPBYTE)malloc(0x21);


				 /* Create a new event for report capture */
				 hEvent = CreateEvent(NULL, TRUE, TRUE, "");

				 /* fill the HidOverlapped structure so that Windows knows which
				 event to cause when the device sends an IN report */
				 HidOverlapped.hEvent = hEvent;
				 HidOverlapped.Offset = 0;
				 HidOverlapped.OffsetHigh = 0;

				 BOOL bResult = false;

				 //			LPCOMMTIMEOUTS lpCommitTimes = (LPCOMMTIMEOUTS)malloc(sizeof(LPCOMMTIMEOUTS));

				 if(*pReadHandle != NULL){
					 HidD_GetPreparsedData(*pReadHandle, &HidParsedData);

					 /* extract the capabilities info */
					 HidP_GetCaps( HidParsedData ,&Capabilities);

					 /* Free the memory allocated when getting the preparsed data */
					 HidD_FreePreparsedData(HidParsedData);

					 bResult = ReadFile(*pReadHandle, 
						 lpReadBuff, 
						 Capabilities.InputReportByteLength,
						 &dwNumberOfBytesRead,
						 (LPOVERLAPPED)&HidOverlapped);


					 if ( bResult == 0 )
					 {
						 // 读取错误信息
						 DWORD dwResult = GetLastError();

						 // I/O端口繁忙
						 if ( dwResult == ERROR_IO_PENDING )
						 {

							 // 需挂起等待
							 dwResult = WaitForSingleObject ( HidOverlapped.hEvent, INFINITE );

							 // I/O端口正常
							 if ( dwResult == WAIT_OBJECT_0 )
							 {
								 // 去读取数据的正常返回值
								 GetOverlappedResult ( *pReadHandle, &HidOverlapped, &dwNumberOfBytesRead, FALSE );
							 }
							 else
							 {
								 //							BOOL bGetTime = GetCommTimeouts(*pReadHandle, lpCommitTimes);
								 free(lpReadBuff);
								 CloseHandle(hEvent);
								 return -1;	// 等待超时
							 }

						 }
						 else
						 {
							 return -1;	// 不明错误
						 }
					 }
				 }
				 for(int i = 0; i < (len + 2); i ++){
					 byReadBuff[i] = *(lpReadBuff + i + 1);
				 }
				 dwResponseSW |= *byReadBuff[len];

				 dwResponseSW = (dwResponseSW << 8) | (*byReadBuff[len + 1]);
				 free(lpReadBuff);
				 CloseHandle(hEvent);
				 return	dwResponseSW;
			 }


			 bool bOpenHidDevice(USHORT VID, USHORT PID){
				 GUID HidGuid;
				 HDEVINFO HidDevInfo;						/* handle to structure containing all attached HID Device information */
				 SP_DEVICE_INTERFACE_DATA devInfoData;		/* Information structure for HID devices */
				 BOOL Result = false;								/* result of getting next device information structure */
				 DWORD Index;								/* index of HidDevInfo array entry */
				 DWORD DataSize;								/* size of the DeviceInterfaceDetail structure */		
				 BOOLEAN GotRequiredSize;					/* 1-shot got device info data structure size flag */
				 DWORD RequiredSize;							/* size of device info data structure */
				 BOOLEAN DIDResult = false;							/* get device info data result */
				 HIDD_ATTRIBUTES HIDAttrib;					/* HID device attributes */

				 HANDLE HidDevHandle;

				 BOOLEAN bRet = false;


				 /* initialize variables */
				 GotRequiredSize = FALSE;



				 /* 1) Get the HID Globally Unique ID from the OS */
				 HidD_GetHidGuid(&HidGuid);


				 /* 2) Get an array of structures containing information about
				 all attached and enumerated HIDs */
				 HidDevInfo = SetupDiGetClassDevs(	
					 &HidGuid,
					 NULL, 
					 NULL, 
					 DIGCF_PRESENT | DIGCF_INTERFACEDEVICE);
				 //													DIGCF_INTERFACEDEVICE);

				 /* 3) Step through the attached device list 1 by 1 and examine
				 each of the attached devices.  When there are no more entries in
				 the array of structures, the function will return FALSE. */

				 Index = 0;									/* init to first index of array */
				 devInfoData.cbSize = sizeof(devInfoData);	/* set to the size of the structure
															that will contain the device info data */

				 do {
					 /* Get information about the HID device with the 'Index' array entry */
					 Result = SetupDiEnumDeviceInterfaces(	HidDevInfo, 
						 0, 
						 &HidGuid,
						 Index, 
						 &devInfoData);

					 /* If we run into this condition, then there are no more entries
					 to examine, we might as well return FALSE at point */
					 if(Result == FALSE)
					 {

						 /* free HID device info list resources */
						 SetupDiDestroyDeviceInfoList(HidDevInfo);

						 return bRet;
					 }


					 if(GotRequiredSize == FALSE)
					 {
						 /* 3) Get the size of the DEVICE_INTERFACE_DETAIL_DATA
						 structure.  The first call will return an error condition, 
						 but we'll get the size of the strucure */
						 DIDResult = SetupDiGetDeviceInterfaceDetail(	HidDevInfo,
							 &devInfoData,
							 NULL,
							 0,
							 &DataSize,
							 NULL);
						 GotRequiredSize = TRUE;

						 /* allocate memory for the HidDevInfo structure */
						 detailData = (PSP_DEVICE_INTERFACE_DETAIL_DATA) malloc(DataSize);

						 /* set the size parameter of the structure */
						 detailData->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA);
					 }


					 /* 4) Now call the function with the correct size parameter.  This 
					 function will return data from one of the array members that 
					 Step #2 pointed to.  This way we can start to identify the
					 attributes of particular HID devices.  */
					 DIDResult = SetupDiGetDeviceInterfaceDetail(	HidDevInfo,
						 &devInfoData,
						 detailData,
						 DataSize,
						 &RequiredSize,
						 NULL);


					 /* 5) Open a file handle to the device.  Make sure the
					 attibutes specify overlapped transactions or the IN
					 transaction may block the input thread. */

					 HidDevHandle = CreateFile( detailData->DevicePath,
						 0,
						 FILE_SHARE_READ | FILE_SHARE_WRITE,
						 (LPSECURITY_ATTRIBUTES)NULL,
						 OPEN_EXISTING,
						 NULL,
						 NULL);


					 /* 6) Get the Device VID & PID to see if it's the device we want */
					 if(HidDevHandle != INVALID_HANDLE_VALUE)
					 {
						 HIDAttrib.Size = sizeof(HIDAttrib);
						 HidD_GetAttributes(	HidDevHandle, &HIDAttrib);						
						 if((HIDAttrib.VendorID == VID) && (HIDAttrib.ProductID == PID))
						 {		

							 /* free HID device info list resources */
							 SetupDiDestroyDeviceInfoList(HidDevInfo);

							 bRet = true;	/* found HID device */

						 }
						 else{

							 bRet = false;
						 }
						 /* 7) Close the Device Handle because we didn't find the device
						 with the correct VID and PID */
						 CloseHandle(HidDevHandle);
					 }

					 Index++;	/* increment the array index to search the next entry */

				 } while(Result == TRUE);
				 return bRet;
			 }



	private: System::Void btnProbeCard_Click(System::Object^  sender, System::EventArgs^  e) {
				 /*
				 if(!g_bDeviceConnected){
				 MessageBox::Show("USB设备未连接，请先连接!\r\n");
				 }else{
				 if(bWrite_ToHIDDevice(&hDevice)){
				 MessageBox::Show("发送成功!\r\n");
				 }
				 }
				 */
			 }


	private: System::Void textCardTestSW_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textOpStatusCardTest_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void textTransCash_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 lpstrTransCashInput = strTextTransCashInput();
			 }
	private: System::Void textWriteCard_TextChanged(System::Object^  sender, System::EventArgs^  e) {

				 lpstrWriteCardNumInput = strTextWriteCardInput();


			 }

	private: System::Void textCharge_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 lpstrChargeCashInput = strTextChargeInput();
			 }

	private: System::Void textConsume_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 lpstrConsumeCashInput = strTextConsumeInput();
			 }

	private: System::Void textResponseCode_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 lpstrResponseCodeInput = strTextResponseCodeInput();
			 }

	private: String^ strTextResponseCodeInput(){
				 array<WCHAR>^ lpCharArray;
				 int index = 0;
				 if(textResponseCode->TextLength > 6){
					 MessageBox::Show("请输入不超过6位的数字!\r\n");	
				 }
				 else{
					 lpCharArray = textResponseCode->Text->ToCharArray();
					 if(!textResponseCode->TextLength){
						 index = textResponseCode->TextLength;	
					 }else{
						 index = textResponseCode->TextLength - 1;
					 }
					 if(lpCharArray->Length){
						 if(lpCharArray[index] < 0x30 || lpCharArray[index] > 0x39){
							 MessageBox::Show("请输入0-9的数字!\r\n");
						 }
					 }


				 }
				 return textResponseCode->Text;
			 }

	private: String^ strTextWriteCardInput(){
				 array<WCHAR>^ lpCharArray;
				 int index = 0;
				 if(textWriteCard->TextLength > 6){
					 MessageBox::Show("请输入不超过6位的数字!\r\n");	
				 }
				 else{
					 lpCharArray = textWriteCard->Text->ToCharArray();
					 if(!textWriteCard->TextLength){
						 index = textWriteCard->TextLength;	
					 }else{
						 index = textWriteCard->TextLength - 1;
					 }
					 if(lpCharArray->Length){
						 if(lpCharArray[index] < 0x30 || lpCharArray[index] > 0x39){
							 MessageBox::Show("请输入0-9的数字!\r\n");
						 }
					 }


				 }
				 return textWriteCard->Text;
			 }

	private: String^ strTextChargeInput(){
				 array<WCHAR>^ lpCharArray;
				 int index = 0;
				 //				if(textCharge->TextLength > 3){
				 //					MessageBox::Show("请输入不超过1000的充值金额!\r\n");	
				 //				 }
				 //				 else{
				 lpCharArray = textCharge->Text->ToCharArray();
				 if(!textCharge->TextLength){
					 index = textCharge->TextLength;	
				 }else{
					 index = textCharge->TextLength - 1;
				 }
				 if(lpCharArray->Length){
					 if(lpCharArray[index] < 0x30 || lpCharArray[index] > 0x39){
						 MessageBox::Show("请输入0-9的数字!\r\n");
						}
					}


				 //				 }
				 return textCharge->Text;
			 }

	private: String^ strTextConsumeInput(){
				 array<WCHAR>^ lpCharArray;
				 int index = 0;
				 //				if(textConsume->TextLength > 3){
				 //					MessageBox::Show("请输入不超过1000的消费金额!\r\n");	
				 //				 }
				 //				 else{
				 lpCharArray = textConsume->Text->ToCharArray();
				 if(!textConsume->TextLength){
					 index = textConsume->TextLength;	
				 }else{
					 index = textConsume->TextLength - 1;
				 }
				 if(lpCharArray->Length){
					 if(lpCharArray[index] < 0x30 || lpCharArray[index] > 0x39){
						 MessageBox::Show("请输入0-9的数字!\r\n");
						}
					}


				 //				 }
				 return textConsume->Text;
			 }

	private: String^ strTextTransCashInput(){

				 array<WCHAR>^ lpCharArray;
				 int index = 0;
				 
				 lpCharArray = textTransCash->Text->ToCharArray();
				 if(!textTransCash->TextLength){
					 index = textTransCash->TextLength;	
				 }else{
					 index = textTransCash->TextLength - 1;
				 }
				 if(lpCharArray->Length){
					 if(lpCharArray[index] < 0x30 || lpCharArray[index] > 0x39){
						 MessageBox::Show("请输入0-9的数字!\r\n");
						}
					}

				 return textTransCash->Text;
		 }

	private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {

			 }

	private: System::Void btnCharge_Click(System::Object^  sender, System::EventArgs^  e) {

				 int nChargedCash;
				 Boolean bOperate = false;
				 if(g_bDeviceConnected){		 
					 if(!g_bGetBanlance){
						 g_nBanlance = nReadBanlance();
					 }
					 if(bDisplayNumOnCard(lpstrChargeCashInput)){
						 MessageBox::Show("请确认卡上显示的金额是否等于输入金额！\n\r"
							 + "确认后请按下卡上的按钮，确认交易！");	
					 }
					 
					 while(!bWaitCardButtonPushed()){
							;
						 }

					 const char* lpcTmp = (char*)(System::Runtime::InteropServices::
						 Marshal::StringToHGlobalAnsi(lpstrChargeCashInput)).ToPointer();
					 sscanf_s(lpcTmp, "%d", &nChargedCash);
					 g_nBanlance += nChargedCash;
					 if(bUpdataBanlance(g_nBanlance)){
						 String^ strTmp = g_nBanlance.ToString();
						 Sleep(1200);
						 if(bDisplayNumOnCard(strTmp)){
//							 Sleep(200);
							 MessageBox::Show("交易成功！");

						 }		
					 }
				 }
				 else{
					 MessageBox::Show("请先连接USB设备");
				 }
			 }



	private: System::Void btnCounsume_Click(System::Object^  sender, System::EventArgs^  e) {

				 int nConsumeCash;

				 if(g_bDeviceConnected){		 
					 if(!g_bGetBanlance){
						 g_nBanlance = nReadBanlance();
					 }


					 if(bDisplayNumOnCard(lpstrConsumeCashInput)){
						 MessageBox::Show("请确认卡上显示的金额是否等于输入金额！\n\r"
							 + "确认后请按下卡上的按钮，确认交易！");	
					 }
					 
					 while(!bWaitCardButtonPushed()){
							;
						 }

					 const char* lpcTmp = (char*)(System::Runtime::InteropServices::Marshal::
						 StringToHGlobalAnsi(lpstrConsumeCashInput)).ToPointer();
					 sscanf_s(lpcTmp, "%d", &nConsumeCash);
					 g_nBanlance -= nConsumeCash;
					 if(bUpdataBanlance(g_nBanlance)){
						 String^ strTmp = g_nBanlance.ToString();
						 Sleep(1500);
						 if(bDisplayNumOnCard(strTmp)){
							 MessageBox::Show("交易成功！");

						 }		
					 } 

				 }
				 else{
					 MessageBox::Show("请先连接USB设备");
				 }
			 }

	private: System::Boolean bWaitCardButtonPushed(){

				 Boolean bRet = false;
				 String^ strCmdFrame = "80bf060000";
				 LPBYTE lpCmdFrame = lpbyteConvert_String2Byte(strCmdFrame, false);
				 if(bWrite_ToHIDDevice(pWriteHandle, lpCmdFrame)){
					 while((dwResponeSW = dwRead_FromHIDDevice(pReadHandle, g_byResponseData, 0x00)) 
						 != 0x9000){
							 ;
					 }
					 bRet = true;
				 }
				 return bRet;
			 }



	private: System::Void btnGenerateResponseCode_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(g_bDeviceConnected){
					 if(bDisplayNumOnCard(lpstrChallangeCode)){
						 MessageBox::Show("请确认挑战码是否一致\r\n若一致，请按确定\r\n" + 
							 "并按下卡上按钮生成应答码");
						 lpstrResponseCode = strGetAuthCode();
						 while(!bWaitCardButtonPushed()){
							;
						 }
						 Sleep(1500);
						if(bDisplayNumOnCard(lpstrResponseCode)){
							textResponseCode->Text = lpstrResponseCode;
							MessageBox::Show("生成应答码成功！\r\n请确认输入框中应答码是否和卡上一致\r\n若一致，请点击登录按钮\r\n");
						}
						 
					 }
				 }
				 else{

				 }
			 }


	private: System::Void btnRSAKey_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(g_bDeviceConnected){
					 array<BYTE>^ byRandom = gcnew array<BYTE>(8);
					 String^ lpstrRandom = strReadRandomNum();
					 for(int i = 0; i < 0x08; i ++){
						 byRandom[i] = *g_byResponseData[i];
					 }
					 String^ lpstrEncryptData = strDES3Encrypt(byRandom, g_byKEY, 0);
					 if(bExternIdentify(lpstrEncryptData)){
						 if(bGetReadyRSAKey()){
							 
							 lpstrRSAKey = strGetRSAKey();
							 textBoxRSAKey->Text = lpstrRSAKey;
						 }
						 else{
							 MessageBox::Show("准备RSA公钥数据失败！");
						 }
					 }
					 else{
						 MessageBox::Show("外部认证失败！");
					 }
				 }
				 else{
					 MessageBox::Show("请先连接USB设备");
				 }
				 
				 

			 }


	 private: System::Boolean bExternIdentify(String^ encrypted){
				 
				  Boolean bRet = false;
				  String^ lpstrCmdFrame = "0082000008" + encrypted;
				  LPBYTE lpCmdFrame = lpbyteConvert_String2Byte(lpstrCmdFrame, true);
				  if(bWrite_ToHIDDevice(pWriteHandle, lpCmdFrame)){
					 if((dwResponeSW = dwRead_FromHIDDevice(pReadHandle, g_byResponseData, 0x00)) == 0x9000){
						 bRet = true;
					 }
					 else{
						 bRet = false;
					 }
				  }
				  return bRet;
			  }

	  private: System::Boolean bGetReadyRSAKey(){
				 
				  Boolean bRet = false;
				  String^ lpstrCmdFrame = "80bf040280";
				  LPBYTE lpCmdFrame = lpbyteConvert_String2Byte(lpstrCmdFrame, true);
				  if(bWrite_ToHIDDevice(pWriteHandle, lpCmdFrame)){
					 if((dwResponeSW = dwRead_FromHIDDevice(pReadHandle, g_byResponseData, 0x00)) == 0x9000){
						 bRet = true;
					 }
					 else{
						 bRet = false;
					 }
				  }
				  return bRet;
			  }

	   private: System::String^ strGetRSAKey(){
				
					String^ strRSAKey = "";
					for(int i = 1; i <= 8; i ++){
					    String^ lpstrCmdFrame = "00c0000010";
						LPBYTE lpCmdFrame = lpbyteConvert_String2Byte(lpstrCmdFrame, true);
						if(bWrite_ToHIDDevice(pWriteHandle, lpCmdFrame)){
							if((dwResponeSW = dwRead_FromHIDDevice(pReadHandle, g_byResponseData, 0x10)) != 0x9000){
								if(i == 8){
									strRSAKey = "读取RSA公钥失败";
								}
								else{
									if(("61" + (0x80 - i * 16).ToString("X2"))->Equals(dwResponeSW.ToString("X2"))){
										for(int j = 0; j < 0x10; j ++){
											String^ strTmp = (*g_byResponseData[j]).ToString("X2");
											strRSAKey += strTmp;
										}
									}
								}
							}
							else{
								if(i == 8){
									for(int j = 0; j < 0x10; j ++){
										String^ strTmp = (*g_byResponseData[j]).ToString("X2");
										strRSAKey += strTmp;
									}
								}
							}
						}
					}
					return strRSAKey;
					
				}

private: System::Void btnUKeyBanlance_Click(System::Object^  sender, System::EventArgs^  e) {

				if(g_bDeviceConnected){		 
					 if((g_nBanlance = nReadBanlance()) >= 0){
						 textBanlanceNewUKey->Text = g_nBanlance.ToString();
					 }
					 else{
						 textBanlanceNewUKey->Text = "取余额操作错误....";
					 }
				 }
				 else{
					 MessageBox::Show("请先连接USB设备");
				 }
		 }

private: System::Void btnSendData_Click(System::Object^  sender, System::EventArgs^  e) {
				if(g_bDeviceConnected){

					if(!g_bGetBanlance){
						 g_nBanlance = nReadBanlance();
					 }

					lpstrAuthCode = strGetAuthCode(); 
					LPBYTE lpbySrcAccount = getImageData(textBoxSrcAccount->Text);
					LPBYTE lpbyDstAccount = getImageData(textBoxDstAccount->Text);
					LPBYTE lpbyAuthCode = getImageData(lpstrAuthCode);
					if(lpstrTransCashInput == nullptr){
						MessageBox::Show("请输入转账金额！");
					}
					else{
						LPBYTE lpbyTransCashInput = getImageData(lpstrTransCashInput);
					
					disTransedNum(lpbySrcAccount, pictureBoxSrcAccount);
					disTransedNum(lpbyDstAccount, pictureBoxDstAccount);
					disTransedNum(lpbyTransCashInput, pictureBoxTransCash);
					disTransedNum(lpbyAuthCode, pictureBoxAuthCode);
					
					int nTransCash = 0;
					const char* lpcTmp = (char*)(System::Runtime::InteropServices::Marshal::
						 StringToHGlobalAnsi(lpstrTransCashInput)).ToPointer();
					 sscanf_s(lpcTmp, "%d", &nTransCash);
					g_nBanlance -= nTransCash;

					if(bDisplayNumOnCard(lpstrAuthCode)){
						 MessageBox::Show("请确认交易信息是否一致\r\n若一致，请" + 
							 "按下卡上按钮确认交易");

						 while(!bWaitCardButtonPushed()){
							;
						 }
						 Sleep(1500);
						 bUpdataBanlance(g_nBanlance);
//						 String^ lpstrTmp = g_nBanlance.ToString();
						 bDisplayNumOnCard(g_nBanlance.ToString());
						MessageBox::Show("交易成功！");
						 
					 }
					}
				 }
				 else{

				 }
			  
		 }

private: System::Void disTransedNum(LPBYTE lpbyNum, PictureBox^ picbox){
				
					array<BYTE>^ buf = gcnew array<BYTE>(470);
					for(int i = 0; i < 470; i ++){
						buf[i] = (BYTE)lpbyNum[i];
					}
					MemoryStream^ ms = gcnew MemoryStream(470);
					ms->Write(buf, 0, buf->Length);
					
					Bitmap^ myImage;
					
					myImage = gcnew System::Drawing::Bitmap(ms);
					picbox->Image = dynamic_cast<Image^>(myImage);
		
		 }


private: System::Byte* getImageData(String^ strData){

				int nLength = strData->Length;
				LPBYTE lpbyBmpData = (LPBYTE)malloc(470);
				array<BYTE>^ byInput = gcnew array<BYTE>(nLength);
				array<WCHAR>^ chData = strData->ToCharArray();
				
				for(int i = 0; i < nLength; i ++){
					byInput[i] = (BYTE)(chData[i] - 0x30);
				}
				for(int i = 0; i < 470; i ++){
					*(lpbyBmpData + i) = (BYTE)0xff;
				}

				// 位图文件的类型，必须为BM
			lpbyBmpData[0x00] = 0x42;		// B
			lpbyBmpData[0x01] = 0x4D;		// M

			// 位图文件的大小，以字节为单位
			lpbyBmpData[0x02] = 0xD6;
			lpbyBmpData[0x03] = 0x01;
			//把4张图片合成在一起，4 × 470
//			lpbyBmpData[0x02] = 0x58;
//			lpbyBmpData[0x03] = 0x07;
			//
			lpbyBmpData[0x04] = 0x00;
			lpbyBmpData[0x05] = 0x00;

			// 位图文件保留字，必须为0
			lpbyBmpData[0x06] = 0x00;
			lpbyBmpData[0x07] = 0x00;
			lpbyBmpData[0x08] = 0x00;
			lpbyBmpData[0x09] = 0x00;

			// 位图数据的起始位置，以相对于位图
			lpbyBmpData[0x0A] = 0x3E;
			lpbyBmpData[0x0B] = 0x00;
			lpbyBmpData[0x0C] = 0x00;
			lpbyBmpData[0x0D] = 0x00;

			// 位图信息头的长度
			lpbyBmpData[0x0E] = 0x28;
			lpbyBmpData[0x0F] = 0x00;
			lpbyBmpData[0x10] = 0x00;
			lpbyBmpData[0x11] = 0x00;

			// 位图的宽度
			lpbyBmpData[0x12] = 0xC0;
			lpbyBmpData[0x13] = 0x00;
			lpbyBmpData[0x14] = 0x00;
			lpbyBmpData[0x15] = 0x00;

			// 位图的高度
			lpbyBmpData[0x16] = 0x11;
//			lpbyBmpData[0x16] = 0x44;		//为了4张图拼接在一起
			lpbyBmpData[0x17] = 0x00;
			lpbyBmpData[0x18] = 0x00;
			lpbyBmpData[0x19] = 0x00;

			// 位图的位面数
			lpbyBmpData[0x1A] = 0x01;
			lpbyBmpData[0x1B] = 0x00;

			// 每个象素的位数
			lpbyBmpData[0x1C] = 0x01;
			lpbyBmpData[0x1D] = 0x00;

			// 压缩说明
			lpbyBmpData[0x1E] = 0x00;
			lpbyBmpData[0x1F] = 0x00;
			lpbyBmpData[0x20] = 0x00;
			lpbyBmpData[0x21] = 0x00;

			// 用字节数表示的位图数据的大小，该数必须是4的倍数
			lpbyBmpData[0x22] = 0x98;
			lpbyBmpData[0x23] = 0x01;
			
//			lpbyBmpData[0x22] = 0x1a;
//			lpbyBmpData[0x23] = 0x07;
			
			lpbyBmpData[0x24] = 0x00;
			lpbyBmpData[0x25] = 0x00;

			// 用象素/米表示的水平分辨率
			lpbyBmpData[0x26] = 0x00;
			lpbyBmpData[0x27] = 0x00;
			lpbyBmpData[0x28] = 0x00;
			lpbyBmpData[0x29] = 0x00;

			// 用象素/米表示的垂直分辨率
			lpbyBmpData[0x2A] = 0x00;
			lpbyBmpData[0x2B] = 0x00;
			lpbyBmpData[0x2C] = 0x00;
			lpbyBmpData[0x2D] = 0x00;

			// 位图使用的颜色数
			lpbyBmpData[0x2E] = 0x00;
			lpbyBmpData[0x2F] = 0x00;
			lpbyBmpData[0x30] = 0x00;
			lpbyBmpData[0x31] = 0x00;

			// 指定重要的颜色数
			lpbyBmpData[0x32] = 0x00;
			lpbyBmpData[0x33] = 0x00;
			lpbyBmpData[0x34] = 0x00;
			lpbyBmpData[0x35] = 0x00;

			// 调色板 (黑色)
			lpbyBmpData[0x36] = 0x00;
			lpbyBmpData[0x37] = 0x00;
			lpbyBmpData[0x38] = 0x00;
			lpbyBmpData[0x39] = 0x00;

			// 调色板 (底色)
			lpbyBmpData[0x3A] = 0xFF;
			lpbyBmpData[0x3B] = 0xFF;
			lpbyBmpData[0x3C] = 0xFF;
			lpbyBmpData[0x3D] = 0x00;

			int xstart = 0;
			switch(nLength){
			case 15:
			case 16:
				xstart = 0;
				break;
				
			case 13:
			case 14:
				xstart = 12;
				break;
				
			case 11:
			case 12:
				xstart = 24;
				break;
				
			case 9:
			case 10:
				xstart = 36;
				break;
			
			case 7:
			case 8:
				xstart = 48;
				break;
				
			case 5:
			case 6:
				xstart = 60;
				break;
			
			case 3:
			case 4:
				xstart = 72;
				break;	
				
			case 1:
			case 2:
				xstart = 84;
				break;		
				
			default:
				break;
				
				
			}

			int ystart = 0;
			
			for(int i = 0; i < nLength; i ++){
				BYTE num = (BYTE)(byInput[i] & 0x0f);
				display7Seg(xstart, ystart, g_byNUM09[num], lpbyBmpData);
				xstart += 12;
			}
			return lpbyBmpData;
		}
		

private: System::Void display7Seg (int nx, int ny, array<BYTE>^ g_byNUM09, LPBYTE lpbyBmpData)
		{
			int		z = 0;
			array<cli::array<BYTE>^>^ p = gcnew array<cli::array<BYTE>^>(6);			
			for(int i = 0; i < 6; i ++)
				p[i] = gcnew array<BYTE>(2);
			Random^	rand = gcnew Random;
			
			
			
			int x1, y1, x2 = 0, y2 = 0;

			for ( z = 0; z < 6; z++ )
			{
				BYTE random = (BYTE)(rand->Next(3));
				
				
				p[z][0] = g_byORG[z][0] + random;
				random = (BYTE)(rand->Next(3));
				p[z][1] = g_byORG[z][1] + random;
			}
			
			x1 = p[g_byNUM09[1] - 1][0];
			y1 = p[g_byNUM09[1] - 1][1];
			for ( z = 2; z <= g_byNUM09[0]; z++ )
			{
				x2 = p[g_byNUM09[z] - 1][0];
				y2 = p[g_byNUM09[z] - 1][1];
				drawLine (nx + x1, ny + y1, nx + x2, ny + y2, 0, lpbyBmpData);
/*
				if((ny + y2) < 0 ){
					Log.v("zdmatrix", "显示7段错误，输入的n2 = " + ny + "，输入的y2 = " + y2);
				}
				drawLine (nx + x1, ny + y1, nx + x2, ny + y2, 0, buf);
	
				// 将边线加宽
				if ( x1 < 7 && x2 < 7 )
					drawLine ( nx + x1 - 1, ny + y1, nx + x2 - 1, ny + y2, 0, buf );
				else if ( x1 >= 7 && x2 >= 7 )
					drawLine ( nx + x1 + 1, ny + y1, nx + x2 + 1, ny + y2, 0, buf );
				else if ( y1 < 7 && y2 < 7 )
					drawLine ( nx + x1, ny + y1 - 1, nx + x2, ny + y2 - 1, 0, buf );
				else
					drawLine ( nx + x1, ny + y1 + 1, nx + x2, ny + y2 + 1, 0, buf );
*/	
				// 交换坐标

				x1 = x2;
				y1 = y2;
				x2 = 0;
				y2 = 0;
			}
			
		 }

private: System::Void drawLine(BYTE x0, BYTE y0, BYTE x1, BYTE y1, BYTE color, LPBYTE lpbyBmpData){
			Boolean steep = false;
			int deltax;
			int deltay;
			int error;
			int ystep;
			int x;
			int y;
			
			steep = Math::Abs(y1 - y0) > Math::Abs(x1 - x0);
			if ( steep )
			{
				int tmp = 0;
				tmp = x0;
				x0 = y0;
				y0 = tmp;
				
				tmp = x1;
				x1 = y1;
				y1 = tmp;
//				swap ( x0, y0 );
//				swap ( x1, y1 );
			}

			if ( x0 > x1 )
			{
				int tmp = x0;
				x0 = x1;
				x1 = tmp;
				
				tmp = y0;
				y0 = y1;
				y1 = tmp;
//				swap ( x0, x1 );
//				swap ( y0, y1 );
			}

			deltax = x1 - x0;

			deltay = Math::Abs( y1 - y0 );

			error = deltax / 2;

			y = y0;

			if ( y0 < y1 )
				ystep = 1;
			else
				ystep = -1;

			for ( x = x0; x <= x1; x ++ )
			{

				if ( steep )
					setPixel ( y, x, color, lpbyBmpData);
					
				else{
					
//					if(y < 0)
//						Log.v("zdmatrix", "输入的y像素错误，为：" + y);
					setPixel ( x, y, color, lpbyBmpData);
				}
				error = error - deltay;

				if ( error < 0 )
				{
					y = y + ystep;
					error = error + deltax;
				}
			}
		}

private: System::Void setPixel(int x, int y, int color, LPBYTE lpbyBmpData){
			int gx = (0x3E + ((16 - y) * 24) + (x / 8));
			int gPixelMask = (BYTE)((0x80 >> (x % 8)));
			*(lpbyBmpData + gx) &= ~gPixelMask;
		}	

private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void buttonTest_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::String^ strDES3Encrypt(array<BYTE>^ randomdata, array<BYTE>^ key, int enorde){
			
			 String^ lpstrReturn;
			 array<BYTE>^ byInput = gcnew array<BYTE>(randomdata->Length);
			 array<BYTE>^ byKey = gcnew array<BYTE>(key->Length);
			 array<BYTE>^ byKeyL = gcnew array<BYTE>(8);
			 array<BYTE>^ byKeyR = gcnew array<BYTE>(8);
			 array<BYTE>^ byTmp = gcnew array<BYTE>(8);
			 
			 
			 Array::Copy(randomdata, 0, byInput, 0, randomdata->Length);
			 Array::Copy(key, 0, byKey, 0, byKey->Length);
			 Array::Copy(byKey, 0, byKeyL, 0, 8);
			 Array::Copy(byKey, 8, byKeyR, 0, 8);

			 byTmp = byDESGo(byInput, byKeyL, enorde);
			 byTmp = byDESGo(byTmp, byKeyR, 1 ^ enorde);
			 array<BYTE>^ byReturn = byDESGo(byTmp, byKeyL, enorde);

			 for(int i = 0; i < 0x08; i ++){

				String^ str = byReturn[i].ToString("X2");
				lpstrReturn += str;
			 }
			 return lpstrReturn;
			 
		 }

		 array<BYTE>^ byDESGo(array<BYTE>^ in, array<BYTE>^ key, int enorde){

			 array<BYTE>^ inPtr = gcnew array<BYTE>(in->Length);
			 array<BYTE>^ keyPtr = gcnew array<BYTE>(key->Length);
			 array<BYTE>^ rTmp = gcnew array<BYTE>(32);
			 int index = 0;

			 Array::Copy(in, 0, inPtr, 0, in->Length);
			 Array::Copy(key, 0, keyPtr, 0, key->Length);

			 array<BYTE>^ bitTmp = byBytes2Bits(in, 64);
			 array<BYTE>^ lr = byTableChange(bitTmp, g_byIPTable, 64);
			 
			 array<BYTE>^ l = gcnew array<BYTE>(lr->Length);
			 Array::Copy(lr, 0, l, 0, lr->Length);

			 array<BYTE>^ r = gcnew array<BYTE>(32);
			 Array::Copy(lr, 32, r, 0, 32);

			 array<cli::array<BYTE>^>^ DESSubKey = bySetSubKey(keyPtr);

			 if(enorde == 0){
				 for(index = 0; index != 16; index++){
					 Array::Copy(r, 0, rTmp, 0, 32);
					 r = byF(r, DESSubKey[index]);
					 r = byXorArray (l, r, 32 );
					 Array::Copy(rTmp, 0, l, 0, 32);
				 }
			 }
			 else{
				 for(index = 16; index != 0; index--){
					 Array::Copy(r, 0, rTmp, 0, 32);
					 r = byF(r, DESSubKey[index - 1]);
					 r = byXorArray (l, r, 32 );
					 Array::Copy(rTmp, 0, l, 0, 32);
				 }
			 }
		
			 Array::Copy(r, 0, bitTmp, 0, 32);
			 Array::Copy(l, 0, bitTmp, 32, 32);
		
			 lr = byTableChange(bitTmp, g_byIPRTable, 64 );

			 array<BYTE>^ out = byBits2Bytes (lr, 64 );
			 return out;
		
		 }


		 array<BYTE>^ byBytes2Bits(array<BYTE>^ input, int length){
			 array<BYTE>^ tmp = gcnew array<BYTE>(input->Length);
			 Array::Copy(input, 0, tmp, 0, input->Length);

			 array<BYTE>^ bits = gcnew array<BYTE>(length);
			 for(int i = 0; i < length; i ++){
				bits[i] = (tmp[i / 8] >> ((i & 7) ^ 7)) & 0x01;
			 }
			 return bits;
		 }

		 array<BYTE>^ byTableChange (array<BYTE>^ input, array<BYTE>^ table, int outLen ){
			array<BYTE>^ out = gcnew array<BYTE>(outLen); 
			for(int i = 0; i < outLen; i++ )
			{
				out[i] = input[table[i] - 1];
			}
			return out;
		 }
		
		 array<cli::array<BYTE>^>^ bySetSubKey(array<BYTE>^ key){
			
			 array<BYTE>^ keyBits = gcnew array<BYTE>(64);
			 array<BYTE>^ t = gcnew array<BYTE>(56);
			 int index = 0;
			 array<BYTE>^ c = gcnew array<BYTE>(56);
			 array<BYTE>^ d = gcnew array<BYTE>(28);

			 array<cli::array<BYTE>^>^ DESSubKey = gcnew array<cli::array<BYTE>^>(16);
			 for(int i = 0; i < 16; i ++){
				DESSubKey[i] = gcnew array<BYTE>(48);
			 }

			 keyBits = byBytes2Bits(key, 64);
			 t = byTableChange (keyBits, g_byPC1Table, 56);

			 Array::Copy(t, 0, c, 0, t->Length);
			 Array::Copy(t, 28, d, 0, t->Length - 28);
		
			for ( index = 0; index != 16; index++ )
			{
				c = byArrayLeftRotate (c, 28, g_byloopTable[index] );
				d = byArrayLeftRotate (d, 28, g_byloopTable[index] );
				DESSubKey[index] = byTableChange (t, g_byPC2Table, 48 );
			}
			return DESSubKey;
		 }

		 array<BYTE>^ byF(array<BYTE>^ in, array<BYTE>^ ki){
			 
			 array<BYTE>^ tmp = gcnew array<BYTE>(48);
			 tmp = byTableChange(in, g_byETable, 48);
			 tmp = byXorArray(tmp, ki, 48);
			 tmp = bySBox(tmp);
			 array<BYTE>^ out = byTableChange (tmp, g_byPTable, 32);
			 return out;
		 }
			  
		 array<BYTE>^ byXorArray(array<BYTE>^ a, array<BYTE>^ b, int len){
			 
			 array<BYTE>^ tmpa = gcnew array<BYTE>(a->Length);
			 array<BYTE>^ tmpb = gcnew array<BYTE>(b->Length);
			 array<BYTE>^ out = gcnew array<BYTE>(len);

			 Array::Copy(a, 0, tmpa, 0, a->Length);
			 Array::Copy(b, 0, tmpb, 0, b->Length);
		
			 for(int i = 0; i < len; i ++)
				out[i] = tmpa[i] ^ tmpb[i];
			 return out;
		 }

		 array<BYTE>^ byBits2Bytes (array<BYTE>^ in, int bitLen ){
		 
			 array<BYTE>^ intmp = gcnew array<BYTE>(in->Length);
			 Array::Copy(in, 0, intmp, 0, in->Length);

			 array<BYTE>^ out = gcnew array<BYTE>(bitLen / 8);

			 for (int i = 0; i != bitLen; i++ )
			 {
				out[i >> 3] |= intmp[i] << ((i & 7) ^ 7);
			 }
			 return out;
		 }

		 array<BYTE>^ byArrayLeftRotate(array<BYTE>^ input, int len, int loop){
			 
			 array<BYTE>^ inputtmp = gcnew array<BYTE>(input->Length);
			 Array::Copy(input, 0, inputtmp, 0, input->Length);

			 int validLoop = loop % len;
			 array<BYTE>^ tmp = gcnew array<BYTE>(validLoop);
			 array<BYTE>^ out = gcnew array<BYTE>(len);
		
			 Array::Copy(inputtmp, 0, tmp, 0, validLoop);
			 Array::Copy(inputtmp, validLoop, out, 0, len - validLoop);
			 Array::Copy(tmp, 0, out, len - validLoop, validLoop);
			 return out;
		 }

		 array<BYTE>^ bySBox (array<BYTE>^ in ){
			 
			 array<BYTE>^ out = gcnew array<BYTE>(36);
			 for (int i = 0; i != 8; i++ )
			 {
				 BYTE r = (in[i * 6] << 1) + in[i * 6 + 5];
				 BYTE c = (in[i * 6 + 1] << 3) + (in[i * 6 + 2] << 2) + (in[i * 6 + 3] << 1) + in[i * 6 + 4];
				 BYTE tmp = g_bySBoxTable[i][r][c];
			
				 out[i * 4]		= ((tmp >> 3) & 1);
				 out[i * 4 + 1]	= ((tmp >> 2) & 1);
				 out[i * 4 + 2]	= ((tmp >> 1) & 1);
				 out[i * 4 + 3]	= (tmp & 1);
			}
			return out;
		 }

};
}



//String^ str = System::Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)detailData->DevicePath);
//							MessageBox::Show(str);
