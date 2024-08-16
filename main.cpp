#include "src/cubic.cpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include<vector>
#include<unordered_map>
#include <iostream>
#include <random>
#include<chrono>
using namespace std;
SDL_Window* window =nullptr;
SDL_Renderer* renderer=nullptr;
TTF_Font* Font=nullptr;
SDL_Rect text;
SDL_Texture* texture;
SDL_Color txcl={255,255,255};
zone z;
void tx(const char* tx,int x,int y)
{
SDL_Surface* txsuf = TTF_RenderText_Solid(Font,tx, txcl);
SDL_Rect textRect;
texture = SDL_CreateTextureFromSurface(renderer, txsuf);
textRect.x = x;
textRect.y = y;
textRect.w = txsuf->w;
textRect.h = txsuf->h;
SDL_RenderCopy(renderer, texture, NULL, &textRect);
}
void scbd()
{
  if (SDL_Init(SDL_INIT_EVERYTHING) < 0||TTF_Init() == -1)   
     {
     SDL_Quit();
     exit(1);
     }
      Font = TTF_OpenFont("C:Windows\\Fonts\\times.ttf", 20);  
 window = SDL_CreateWindow("SDL Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 800, SDL_WINDOW_SHOWN);
 renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
 tx("my ruscub",408,100);
 tx("q to quit",408,150);
 tx("score:",408,300);
 tx("highest:",408,250);
 tx("wasd to controll",408,200);
 SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
 for(int i=0;i<8;i++)
 SDL_RenderDrawLine(renderer, 390+i, 0, 390+i, 800);
 SDL_RenderPresent(renderer);
/*RGBA
红色：(255, 0, 0, 255)
绿色：(0, 255, 0, 255)
蓝色：(0, 0, 255, 255)
黄色：(255, 255, 0, 255)*/
}
void mdraw(int mp[][10])
{
 int x=0,y=0;
 SDL_Rect cub={x,y,28,28};
 for(int i=0;i<20;i++)
 for(int j=0;j<10;j++)
 {
    switch (mp[i][j])
    {
    case 0:
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    break;
    case 1:
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    break;
    case 2:
    SDL_SetRenderDrawColor(renderer,0, 255, 0, 255);
    break;
    case 3:
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    break;
    case 4:
    SDL_SetRenderDrawColor(renderer,255, 255, 0, 255);
    break;
    default: 
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    break;
    }
    cub.x=40+30*j;
    cub.y=760-30*i;
    SDL_RenderFillRect(renderer, &cub);
 }
  SDL_RenderPresent(renderer);
}
void esc()
{
    TTF_CloseFont(Font);
    TTF_Quit();
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

}
void chk()
{
for(int i=0;i<20;i++)
    {
    cout<<endl;
    for(int j=0;j<10;j++)
    cout<<z.mp[i][j]<<" ";}
    cin.get();
    cin.get();
}
void work()
{
    
    bool qt=1;
     SDL_Event press;
     
    auto s = std::chrono::high_resolution_clock::now();
    auto e = std::chrono::high_resolution_clock::now();
    chrono::duration<double> d = e -s;
    mdraw(z.mp);
    while(qt)
    {
     SDL_PollEvent(&press);
     if(press.type==SDL_KEYDOWN&&((press.key.keysym.sym==SDLK_w)||(press.key.keysym.sym==SDLK_a)||(press.key.keysym.sym==SDLK_s)||(press.key.keysym.sym==SDLK_d)))
     {
      cout<<"in"<<endl;
      SDL_Event up;
      auto s1 = std::chrono::high_resolution_clock::now();
      while(1)
      {
        SDL_PollEvent(&up);
        e=std::chrono::high_resolution_clock::now();
        d=e-s1;
        if(d.count()>0.25)
        {break;
         cout<<"timeout<<endl";}
        if(up.type==SDL_KEYUP&&up.key.keysym.sym==press.key.keysym.sym)
        {
        switch (press.key.keysym.sym)
        {
         case SDLK_w:
         z.move(1);
         break;
         case SDLK_a:
         z.move(4);
         break;
         case SDLK_s:
         z.move(3);
         break;
         case SDLK_d:
         z.move(5);
         break;
         case SDLK_q:
         esc();
         break;
         default:
         break;
        }
        mdraw(z.mp);
        break;
        }
        
      }
      
     }
     e=std::chrono::high_resolution_clock::now();
     d=e-s;
     cout<<d.count()<<endl;
     if(d.count()>0.9)
     {z.move(3);
      s = std::chrono::high_resolution_clock::now();
     }
     mdraw(z.mp);
    }
}
//main函数中的参数不能省略，不然会报错
int WinMain(int args, char *argv[])
{  
    scbd();  
    work();
   
       
    return 0;
}


