class Item
{
	char Title[40];			//����
	char Author[20];		//����
	char IndexCode[10];		//�����
	long BarCode;			//������
public:
	Item();
	//Item(Item &it);
	void SetTitle(char []); //��������
	void SetAuthor(char []);
	void SetIndexCode(char[]);
	void SetBarCode(long);
	long GetBarCode(){return BarCode;}
	void Show();			//��ʾ�����Ϣ
};

class Reader
{
	char Name[20];		  //����
	char Position[20];	  //ְ��
	long Code;			  //����֤��
public:
	Item items[10];		  //������
public:
	Reader();
	long GetCode(){return Code;}
	void SetName(char []);
	void SetPosition(char []);
	void SetCode(long);
	void AddBook(Item it);//���������
	void DelBook(Item it);//ɾ��������
	void ShowBooks();	  //��ʾ�ѽ�����Ϣ
	void ShowReader(){cout<<Name<<","<<Position<<","<<Code<<endl;}
	int  itemCounter;	  //���������
};

class CMain
{
	int itemNum;            //����鼮�ܲ���
	int readNum;			//��ע�������
	Item item[500];         //�洢�鼮
	Reader reader[50];		//�洢����

public:
	CMain();
	void CreateBookItem();  //������Ŀ���鼮���
	void CreateReader();	//����ע��
	void ShowMenu();		//�˵���ʾ
	void Return();			//����
	void Borrow();			//����
	void Require();			//��ѯ�ѽ�����Ϣ
	//void fnDataSave(char *fname);//��������
	//void fnDataLoad(char *fname);//��������
};