//����5.7���õݹ麯����m��n�����Լ����
#include <iostream.h>
int fnGcd(int m,int n)
{
    int k;
    if(n == 0)k = m;
    else      k = fnGcd(n, m%n);
    return k;
}
void main()
{
    int m,n,k;
    cout<<"��������������m,n: " ;
    cin>>m>>n;
    k = fnGcd(m,n);
    cout<<m<<"��"<<n<<"�����Լ����"<<k<<endl;
}
