#include<unordered_map>
#include<iostream>
#include<string>
#include<vector>




class cubic
{
public:
   int color;
   bool shape[4][4];
   cubic(int col,int shp);
   void turnl();
   void turnr();
~cubic(){};
};

cubic::cubic(int col=0,int shp=0)
{
color=col;
 bool r[4][4]={
    {0,0,0,0},
    {1,0,0,0},
    {1,0,0,0},
    {1,1,0,0}    
    };
     bool l[4][4]={
    {0,0,0,0},
    {0,1,0,0},
    {0,1,0,0},
    {1,1,0,0}    
    };
    bool n[4][4]={
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {1,1,1,1}    
    };
    bool t[4][4]={
    {0,0,0,0},
    {0,0,0,0},
    {1,1,1,0},
    {0,1,0,0}    
    };
    bool o[4][4]={
    {0,0,0,0},
    {0,0,0,0},
    {1,1,0,0},
    {1,1,0,0}    
    };
    bool s[4][4]={
    {0,0,0,0},
    {0,1,1,0},
    {0,1,0,0},
    {1,1,0,0}    
    };
     bool z[4][4]={
    {0,0,0,0},
    {1,1,0,0},
    {0,1,0,0},
    {0,1,1,0}    
    };
switch (shp)
{
case 1 :
   
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    shape[i][j]=r[i][j];
    break;

case 2 :
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    shape[i][j]=l[i][j];
    break;
case 3 :
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    shape[i][j]=n[i][j];
    break;
case 4 :
    
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    shape[i][j]=o[i][j];
    break;

case 5 :
    
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    shape[i][j]=t[i][j];
    break;

 case 6 :
    
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    shape[i][j]=s[i][j];
    break;
    case 7 :
   
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    shape[i][j]=z[i][j];
    break;    
default:
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    shape[i][j]=0;
    break;
}
}
void cubic::turnl()
{
    bool t[4][4]={0};
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    if(shape[i][j]==1)
    t[j][3-i]=1;
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    shape[i][j]=t[i][j];
}
void cubic::turnr()
{
    bool t[4][4]={0};
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    if(shape[i][j]==1)
    t[3-j][i]=1;
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    shape[i][j]=t[i][j];
}
