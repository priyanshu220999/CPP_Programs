#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
void dec_bin(int dec)
{
  int bin1[50],i,c=0,t,temp,j;
  for(i=0,j=dec;j!=1&&j!=0;i++)
  {
    bin1[i]=j%2;
    c++;
    j=j/2;
  }
  bin1[i]=j;
  c++;
  cout<<"\nBinary number : ";
  for(i=c-1;i>=0;i--)
  cout<<bin1[i];
}
void dec_oct(int dec)
{
  int oct[50],i,c=0,t,temp,j;
  for(i=0,j=dec;j>7;i++)
  {
    oct[i]=j%8;
    c++;
    j=j/8;
  }
  oct[i]=j;
  c++;
  cout<<"\nOctal number : ";
  for(i=c-1;i>=0;i--)
  cout<<oct[i];
}
void dec_hex(int dec)
{
  int num,temp,i=1,j,r;
  char hex[50];
  temp=dec;
  while(temp!=0)
  {
    r=temp%16;
    if(r<10)
      hex[i++]=r+48;
    else
      hex[i++]=r+55;
    temp=temp/16;
  }
  cout<<"\nHexadecimal number:";
  for(j=i-1;j>0;j--)
    cout<<hex[j];
}
void bin_dec(long int bin)
{
  int bin2[50],c=0,dec1=0;
  for(int i=0;bin!=1&&bin!=0;i++)
  {
    bin2[i]=bin%10;
    if(bin%10==0) bin=bin/10;
    else
    {
      bin=bin-1;
      bin=bin/10;
    }
    c++;
  }
  bin2[i]=bin;
  c++;
  for(i=0;i<c;i++)
  {
    dec1=dec1+pow(2,i)*bin2[i];
  }
  cout<<"\nDecimal Number: "<<dec1;
}
void bin_oct(long int bin)
{
  int bin2[50],c=0,dec1=0;
  for(int i=0;bin!=1&&bin!=0;i++)
  {
    bin2[i]=bin%10;
    if(bin%10==0) bin=bin/10;
    else
    {
      bin=bin-1;
      bin=bin/10;
    }
    c++;
  }
  bin2[i]=bin;
  c++;
  for(i=0;i<c;i++)
  {
    dec1=dec1+pow(2,i)*bin2[i];
  }
   int oct[50],t,temp,j;
   c=0;
  for(i=0,j=dec1;j>7;i++)
  {
    oct[i]=j%8;
    c++;
    j=j/8;
  }
  oct[i]=j;
  c++;
  cout<<"\nOctal number : ";
  for(i=c-1;i>=0;i--)
  cout<<oct[i];
}
void bin_hex(long int bin)
{
  int bin2[50],c=0,dec1=0;
  for(int i=0;bin!=1&&bin!=0;i++)
  {
    bin2[i]=bin%10;
    if(bin%10==0) bin=bin/10;
    else
    {
      bin=bin-1;
      bin=bin/10;
    }
    c++;
  }
  bin2[i]=bin;
  c++;
  for(i=0;i<c;i++)
  {
    dec1=dec1+pow(2,i)*bin2[i];
  }
  int num,temp,j,r;
  i=1;
  char hex[50];
  temp=dec1;
  while(temp!=0)
  {
    r=temp%16;
    if(r<10)
      hex[i++]=r+48;
    else
      hex[i++]=r+55;
    temp=temp/16;
  }
  cout<<"\nHexadecimal number:";
  for(j=i-1;j>0;j--)
    cout<<hex[j];
}
void oct_bin(int oct)
{
  int oct1[50],bin2[50][50],c=0,i,t,temp;
  for(i=0;oct>8;i++)
  {
    oct1[i]=oct%10;
    if(oct%10==0) oct=oct/10;
    else
    {
      t=oct%10;
      oct=oct-t;
      oct=oct/10;
    }
    c++;
  }
  oct1[i]=oct;
  c++;
  for(i=c-1;i>=0;i--)
  {
    if(oct1[i]==0)
    {
      for(int j=0;j<3;j++)
      {
	bin2[i][j]=0;
      }
    }
    else if(oct1[i]==1)
    {
      for(int j=0;j<3;j++)
      {
	if(j==2) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(oct1[i]==2)
    {
      for(int j=0;j<3;j++)
      {
	if(j==1) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(oct1[i]==3)
    {
      for(int j=0;j<3;j++)
      {
	if(j==0) bin2[i][j]=0;
	else bin2[i][j]=1;
      }
    }
    else if(oct1[i]==4)
    {
      for(int j=0;j<3;j++)
      {
	if(j==0) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(oct1[i]==5)
    {
      for(int j=0;j<3;j++)
      {
	if(j==1) bin2[i][j]=0;
	else bin2[i][j]=1;
      }
    }
    else if(oct1[i]==6)
    {
      for(int j=0;j<3;j++)
      {
	if(j==2) bin2[i][j]=0;
	else bin2[i][j]=1;
      }
    }
    else
    {
      for(int j=0;j<3;j++)
      {
	bin2[i][j]=1;
      }
    }
  }
  cout<<"\nBinary number : ";
  for(i=c-1;i>=0;i--)
  {
    for(int j=0;j<3;j++)
    {
      cout<<bin2[i][j];
    }
  }
}
void oct_dec(int oct)
{
  int oct1[50],dec2=0,c=0,i,t;
  for(i=0;oct>8;i++)
  {
    oct1[i]=oct%10;
    if(oct%10==0) oct=oct/10;
    else
    {
      t=oct%10;
      oct=oct-t;
      oct=oct/10;
    }
    c++;
  }
  oct1[i]=oct;
  c++;
  for(i=0;i<c;i++)
  {
    dec2=dec2+pow(8,i)*oct1[i];
  }
  cout<<"\nDecimal Number : "<<dec2;
}
void oct_hex(int oct)
{
  int oct1[50],dec2=0,c=0,i,t;
  for(i=0;oct>8;i++)
  {
    oct1[i]=oct%10;
    if(oct%10==0) oct=oct/10;
    else
    {
      t=oct%10;
      oct=oct-t;
      oct=oct/10;
    }
    c++;
  }
  oct1[i]=oct;
  c++;
  for(i=0;i<c;i++)
  {
    dec2=dec2+(pow(8,i)*oct1[i]);
  }
  int num,temp,j,r;
  i=1;
  char hex[50];
  temp=dec2;
  while(temp!=0)
  {
    r=temp%16;
    if(r<10)
      hex[i++]=r+48;
    else
      hex[i++]=r+55;
    temp=temp/16;
  }
  cout<<"\nHexadecimal number:";
  for(j=i-1;j>0;j--)
    cout<<hex[j];
}
void hex_bin(char hex1[])
{
  char temp;int bin2[50][50],i,t;
  t=strlen(hex1);
  for(i=0;hex1[i]!='\0';i++)
  {
    if(hex1[i]=='0')
    {
      for(int j=0;j<4;j++)
      {
	bin2[i][j]=0;
      }
    }
    else if(hex1[i]=='1')
    {
      for(int j=0;j<4;j++)
      {
	if(j==3) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(hex1[i]=='2')
    {
      for(int j=0;j<4;j++)
      {
	if(j==2) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(hex1[i]=='3')
    {
      for(int j=0;j<4;j++)
      {
	if(j==2||j==3) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(hex1[i]=='4')
    {
      for(int j=0;j<4;j++)
      {
	if(j==1) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(hex1[i]=='5')
    {
      for(int j=0;j<4;j++)
      {
	if(j==2||j==3) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(hex1[i]=='6')
    {
      for(int j=0;j<4;j++)
      {
	if(j==1||j==2) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(hex1[i]=='7')
    {
      for(int j=0;j<4;j++)
      {
	if(j==0) bin2[i][j]=0;
	else bin2[i][j]=1;
      }
    }
    else if(hex1[i]=='8')
    {
      for(int j=0;j<4;j++)
      {
	if(j==0) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(hex1[i]=='9')
    {
      for(int j=0;j<4;j++)
      {
	if(j==0||j==3) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(hex1[i]=='A')
    {
      for(int j=0;j<4;j++)
      {
	if(j==0||j==2) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(hex1[i]=='B')
    {
      for(int j=0;j<4;j++)
      {
	if(j==1) bin2[i][j]=0;
	else bin2[i][j]=1;
      }
    }
    else if(hex1[i]=='C')
    {
      for(int j=0;j<4;j++)
      {
	if(j==0||j==1) bin2[i][j]=1;
	else bin2[i][j]=0;
      }
    }
    else if(hex1[i]=='D')
    {
      for(int j=0;j<4;j++)
      {
	if(j==2) bin2[i][j]=0;
	else bin2[i][j]=1;
      }
    }
    else if(hex1[i]=='E')
    {
      for(int j=0;j<4;j++)
      {
	if(j==3) bin2[i][j]=0;
	else bin2[i][j]=1;
      }
    }
    else if(hex1[i]=='F')
    {
      for(int j=0;j<4;j++)
      {
	bin2[i][j]=1;
      }
    }
  }
  cout<<"\nBinary Number:";
  for(i=0;i<t;i++)
    for(int j=0;j<4;j++)
    {
      cout<<bin2[i][j];
    }
}
void hex_dec(char hex1[])
{
  int i,n,dec=0,hex[50];
  n=strlen(hex1);
  for(i=0;hex1[i]!='\0';i++)
  {
    if(hex1[i]=='A') hex[i]=10;
    else if(hex1[i]=='B') hex[i]=11;
    else if(hex1[i]=='C') hex[i]=12;
    else if(hex1[i]=='D') hex[i]=13;
    else if(hex1[i]=='E') hex[i]=14;
    else if(hex1[i]=='F') hex[i]=15;
    else if(hex1[i]=='0') hex[i]=0;
    else if(hex1[i]=='1') hex[i]=1;
    else if(hex1[i]=='2') hex[i]=2;
    else if(hex1[i]=='3') hex[i]=3;
    else if(hex1[i]=='4') hex[i]=4;
    else if(hex1[i]=='5') hex[i]=5;
    else if(hex1[i]=='6') hex[i]=6;
    else if(hex1[i]=='7') hex[i]=7;
    else if(hex1[i]=='8') hex[i]=8;
    else if(hex1[i]=='9') hex[i]=9;
  }
  int m=n-1;
  for(i=0;i<n;i++)
  {
    dec=dec+(pow(16,m--)*hex[i]);
  }
  cout<<"\nDecimal Number:"<<dec;
}
void hex_oct(char hex1[])
{
  int i,n,dec=0,hex[50];
  n=strlen(hex1);
  for(i=0;hex1[i]!='\0';i++)
  {
    if(hex1[i]=='A') hex[i]=10;
    else if(hex1[i]=='B') hex[i]=11;
    else if(hex1[i]=='C') hex[i]=12;
    else if(hex1[i]=='D') hex[i]=13;
    else if(hex1[i]=='E') hex[i]=14;
    else if(hex1[i]=='F') hex[i]=15;
    else if(hex1[i]=='0') hex[i]=0;
    else if(hex1[i]=='1') hex[i]=1;
    else if(hex1[i]=='2') hex[i]=2;
    else if(hex1[i]=='3') hex[i]=3;
    else if(hex1[i]=='4') hex[i]=4;
    else if(hex1[i]=='5') hex[i]=5;
    else if(hex1[i]=='6') hex[i]=6;
    else if(hex1[i]=='7') hex[i]=7;
    else if(hex1[i]=='8') hex[i]=8;
    else if(hex1[i]=='9') hex[i]=9;
  }
  int m=n-1;
  for(i=0;i<n;i++)
  {
    dec=dec+(pow(16,m--)*hex[i]);
  }
  int oct[50],c=0,t,temp,j;
  for(i=0,j=dec;j>7;i++)
  {
    oct[i]=j%8;
    c++;
    j=j/8;
  }
  oct[i]=j;
  c++;
  cout<<"\nOctal number : ";
  for(i=c-1;i>=0;i--)
  cout<<oct[i];
}
void main()
{
  clrscr();
  int ch,dec,oct,g;
  long int bin;
  char hex[50];
  cout<<"****************Number System Conversions****************";
  start:
  cout<<"\n\n1.Decimal to Binary\n2.Decimal to Octal\n3.Decimal to HexaDecimal\n4.Binary to Decimal\n5.Binary to Octal\n6.Binary to Hexadecimal\n7.Octal to Binary\n8.Octal to Decimal\n9.Octal to Hexadecimal\n10.Hexadecimal to Binary\n11.Hexadecimal to Decimal\n12.Hexadecimal to Octal";
  cout<<"\n\nEnter your choice:";
  cin>>ch;
  switch(ch)
  {
    case 1:
    cout<<"\nEnter decimal number:";cin>>dec;
    dec_bin(dec);
    break;
    case 2:
    cout<<"\nEnter decimal number:";cin>>dec;
    dec_oct(dec);
    break;
    case 3:
    cout<<"\nEnter decimal number:";cin>>dec;
    dec_hex(dec);
    break;
    case 4:
    cout<<"\nEnter binary number:";cin>>bin;
    bin_dec(bin);
    break;
    case 5:
    cout<<"\nEnter binary number:";cin>>bin;
    bin_oct(bin);
    break;
    case 6:
    cout<<"\nEnter binary number:";cin>>bin;
    bin_hex(bin);
    break;
    case 7:
    cout<<"\nEnter octal number:";cin>>oct;
    oct_bin(oct);
    break;
    case 8:
    cout<<"\nEnter octal number:";cin>>oct;
    oct_dec(oct);
    break;
    case 9:
    cout<<"\nEnter octal number:";cin>>oct;
    oct_hex(oct);
    break;
    case 10:
    cout<<"\nEnter hexadecimal number:";cin>>hex;
    hex_bin(hex);
    break;
    case 11:
    cout<<"\nEnter hexadecimal number:";cin>>hex;
    hex_dec(hex);
    break;
    case 12:
    cout<<"\nEnter hexadecimal number:";cin>>hex;
    hex_oct(hex);
    break;
    default:
    cout<<"\nSmart banne ki koshish kar rha hai. Pehli fursat me nikal.";
    break;
  }
  cout<<"\nPress 1 to continue : ";cin>>g;
  if(g==1) goto start;
  getch();
}