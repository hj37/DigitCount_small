#include <cstdio>

using namespace std;

int main()
{
    freopen("inp.txt","rt",stdin);
    int n; int cnt = 0; int tmp;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        tmp = i;/*i�� �Ѽ��� �� �����Ƿ�
        �ӽú��� �ʿ� */
        while(tmp >0)
        {
            tmp = tmp/10;
            cnt++;
        }/*�ִ� 10���� �̹Ƿ� 5�������� �ݺ��� */
    }
    printf("%d\n",cnt);
    return 0;
}
