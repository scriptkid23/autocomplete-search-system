#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,j,dem;
        printf("\n Nhap n: ");
        scanf("%d", &n);
        for (i=2;i<=n;i++)
        {
            dem=0; //khởi tạo lại biến đếm nếu như không khởi tạo thì đếm sẽ tăng lên liên tục//
            for (j=1;j<=i;j++)
            {
                if(i%j==0)
                    dem=dem+1;}    //biến đếm biểu thị ước của các số chạy từ 1 đến n//

            if(dem==2)    // chọn tất cả các số có 2 ước có nghĩa là đếm = 2//
                printf("%d, ",i);

        }
}

