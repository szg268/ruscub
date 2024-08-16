
#include<iostream>
#include<string>
#include<vector>
#include <chrono>
#include <cstdlib>   
#include <ctime>   


class cubic
{
public:
   int color;
   bool shape[4][4];
   cubic(int col,int shp);
   void turnl();
   void turnr();
   void fresh(int col,int shp);
   cubic& operator=(cubic tar)
   {
    this->color=tar.color;
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    this->shape[i][j]=tar.shape[i][j];
    return *this;
   }
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
void cubic::fresh(int col=0,int shp=0)
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

class zone{
    public:
    int mp[20][10];
    int ni,nj;
    cubic nw,nx;
    zone();
    void move(int t);
    bool nxt();
    int cnt();
    bool full(int i);
    bool ismv(int d);
    void drawnw();
    void clearnw();
    bool premv(int dr);
};
zone::zone(){
    for(int i=1;i<20;i++)
    for (int j=0;j<10;j++)
    mp[i][j]=0;
    ni=16;
    nj=3;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int shape = std::rand() % 7 + 1;
    int color = std::rand() % 4 + 1;
    nw.fresh(color,shape);
    shape=std::rand() % 7 + 1;
    color=std::rand() % 4 + 1;
    nx.fresh(color,shape);
   drawnw();
}
void zone::drawnw()
{
  for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    if(nw.shape[i][j])
    mp[ni+i][nj+j]=nw.color;
}
void zone::clearnw(){
 for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    if(nw.shape[i][j])
    mp[ni+i][nj+j]=0;
}
bool zone::full(int i)
{
int cl=mp[i][0];
for(int j=0;j<10;j++)
if(mp[i][j]==0||mp[i][j]!=cl)
return 0;
return 1;
}

bool zone::ismv(int d)
{   

    switch (d)
    {
    case 0:
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    if(mp[ni+i][nj+j]!=0&&nw.shape[i][j])
    return 0;
    break;
    case 3:
        if(ni-1<0)
        return 0;
        for(int j=0;j<4;j++)
        if(mp[ni-1][nj+j]!=0&&nw.shape[3][j])
        return 0;
        break;
    case 4:
        if(nj-1<0)
        return 0;
        for(int i=0;i<4;i++)
        if(mp[ni+i][nj-1]!=0&&nw.shape[i][0])
        return 0;
        break;
    case 5:
        if(nj+1>6)
        return 0;
        for(int i=0;i<4;i++)
        if(mp[ni+i][nj+1]!=0&&nw.shape[i][3])
        return 0;
        break;
    default:
        break;
    }
    return 1;
}

bool zone::premv(int dr)
{
    bool shp[4][4]={0};
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    shp[i][j]=nw.shape[i][j];
    switch (dr)
   { 
    case 3:
    for(int i=0;i<4;i++)
    if(nw.shape[0][i]!=0)
    return 0;
    for(int i=0;i<4;i++)
    nw.shape[3][i]=0;
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    nw.shape[i][j]=shp[i+1][j];
    return 1;
    break;
    case 4:
    for(int i=0;i<4;i++)
    if(nw.shape[i][0]!=0)
    return 0;
    for(int i=0;i<4;i++)
    nw.shape[i][3]=0;
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    nw.shape[j][i]=shp[j][i+1];
    return 1;
    break;
    case 5:
    for(int i=0;i<4;i++)
    if(nw.shape[i][3]!=0)
    return 0;
    for(int i=0;i<4;i++)
    nw.shape[i][0]=0;
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    nw.shape[j][i+1]=shp[j][i];
    return 1;
    break;
    default:
    break;
   }
   return 0;
}
void zone::move(int t)
{
clearnw();
 if(t==1)
 {nw.turnl();
 if(!ismv(0))
  nw.turnr();
 }
 if(t==2)
 nw.turnr();
 if(t==3&&(!premv(3)))
 {
  
  if(ismv(3))
  { 
    
    ni--;
   
  }
 }
 if(t==4&&!premv(4))
 {
    
    if(ismv(4))
  {
    
    nj--;
   
  }

 }
 if(t==5)
 {
  if(ismv(5)&&!premv(5))
  {
    nj++;
  }
 }
 
 drawnw();
}
bool zone::nxt(){
    nw=nx;
    int shape=std::rand() % 7 + 1;
    int color=std::rand() % 4 + 1;
    nx.fresh(color,shape);
    return ismv(0);
}

int zone::cnt(){
    int h=0;
    int mpc[20][10]={0};
    for(int i=0;i<20;i++)
    for(int j=0;j<10;j++)
    mpc[i][j]=mp[i][j];
    for(int i=0;i<20;i++)
    {
        if(full(i))
        {h++;
        for(int j=0;j<10;j++)
        mp[i][j]=0;
        }
        else
        break;
    }
    for(int i=h+2;i<20;i++)
    for(int j=0;j<10;j++)
    {
        if(mpc[i][j]!=0)
        for(int k=i;k>h+1;k--)
        {
            if(mpc[k][j]==0)
            {
                mpc[k][j]=mpc[i][j];
                mpc[i][j]=0;
                break;
            }
        }
    }
     for(int i=h;i<20;i++)
    {
        if(full(i))
        {h++;
        for(int j=0;j<10;j++)
        mp[i][j]=0;
        }
        else
        break;
    }
    for(int i=h;i<20;i++)
    for(int j=0;j<10;j++)
    mp[i-h][j]=mpc[i][j];
    return 10*h*h;
}