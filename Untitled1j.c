#include<windows.h>
int main()
{
    char a[500];
    HWND hwnd;
    hwnd=FindWindow(0,"COMPUTER");
    if(FindWindow(0,"mohan")!=NULL)
    {
    if(hwnd !=0)
    {
printf ("file  found");
      //  ShowWindow (hwnd, SW_SHOW);


    }
    }
    else
    {
        printf ("file not found");
    }
}
