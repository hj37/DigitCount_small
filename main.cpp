#include <cstdio>

using namespace std;

int main()
{
    freopen("inp.txt","rt",stdin);
    int n; int cnt = 0; int tmp;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        tmp = i;/*i를 훼손할 순 없으므로
        임시변수 필요 */
        while(tmp >0)
        {
            tmp = tmp/10;
            cnt++;
        }/*최대 10만번 이므로 5번정도만 반복함 */
    }
    printf("%d\n",cnt);
    return 0;
}
