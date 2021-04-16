
class Book				//ͼ����
{
protected:
	char Title[40];		//����
	long BarCode;		//����
	int  Type;			//0��ʾ�鼮��1��ʾ��־
public:
//	Book *Next;         //Ϊ��������������������ָ��
public:
	Book();
	Book(char *title,long code);
	void SetBarCode(long code){BarCode = code;}
	void SetTitle(char *tl){strcpy(Title,tl);}
	void SetType(bool type){Type = type;}
	int  GetType(){ return Type; }
    long GetBarCode(){ return BarCode; }
	virtual void Show(); //��ʾ��������Ϊ�麯��
};

class Item: public Book  //�鼮��
{
//	char Title[40];      //�������ӻ���̳�����
	char Author[20];	 //����
	char IndexCode[10];  //�����
//	long BarCode;		 //������,�ӻ���̳�������
public:
	Item();
	Item(char *author,char *title,char *index,int code ); //���캯��
	//void SetTitle(char []);//�ӻ���̳�������
	void SetAuthor(char []);
	void SetIndexCode(char[]);
	//void SetBarCode(long); //�ӻ���̳�������
	//long GetBarCode(){return BarCode;}//�̳�������
	void Show();			 //�ض��庯������ʾ�鼮��Ϣ
};
class Magazine: public Book				 //��־��
{
	int Volume;							 //���
	enum LANG { CHINESE=1,ENGLISH} Lang; //��������
public:
	Magazine():Book(){Volume=0;Lang = CHINESE; Type = 1;}
	Magazine(char *title,int vol,LANG lang,int code);
//	Magazine(Magazine &);
	void SetVolume(int vol){Volume = vol;}
	void SetLang(int lang){Lang = (LANG)lang;}
	void Show();						//�ض��庯������ʾ��־��Ϣ
};

class Reader				//������
{
	char Name[20];
	char Position[20];		//ְ��
	long Code;				//����֤��
public:
	Item items[10];			//������
	//Book *items;          //��������
	Magazine mags[10];		//������־
public:
	Reader();
	Reader(char *name,char *posi,int code);
//	Reader(Reader &);
//	~Reader(){}
	long GetCode(){return Code;}
	void SetName(char []);
	void SetPosition(char []);
	void SetCode(long);
	void AddBook(Item it);    //���������
	void AddBook(Magazine it);//���������־
	void DelBook(Item it);    //��������������
	void DelBook(Magazine it);//����־�����������־
	int  ShowBooks();		  //��ʾ������Ϣ
	void ShowReader(){cout<<Name<<","<<Position<<","<<Code<<endl;}
	int  itemCounter;		  //������,ͳ����������Ŀ
	int  zazCounter;		  //������,ͳ��������־��Ŀ
};

class CMain					  //������
{
	int itemNum;			  //����鼮����
	int magNum;				  //�����־����
	int readNum;			  //����ע���������
	Item item[100];
	Magazine mag[100];
	Reader reader[50];
public:
	CMain();
	void CreateBookItem();		//�鼮����־������
	void CreateReader();		//����ע��Ǽ�
	void ShowMenu();			//���˵���ʾ
	void Return();				//�鼮����־��Ĺ黹���� 
	void Borrow();				//�鼮����־��Ľ��Ĳ���
	void Require();				//��ѯ������Ϣ
	void fnShowBook();  		//��ʾ����鼮����־��Ϣ
	void fnShowReader();		//��ʾ�Ǽ�ע��Ķ�����Ϣ
	void fnDataSave(char *fname);
	void fnDataLoad(char *fname);
};