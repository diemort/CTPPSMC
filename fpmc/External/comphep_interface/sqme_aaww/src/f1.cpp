/************************************************
*    CompHEP version 4.4p3      *
*------------------------------------------------
* Copyright (C) 2001-2003, CompHEP Collaboration*
************************************************/
/*
                      A     W-   !  W-    A                          
                    -1---@-3<----!--<3-@---1-                        
                      P1 |  P4   !  P4 |  P1                         
                       W+|P5     !   W+|-P6                          
                      A  2  W+   !  W+ 6  A                          
                    -4---@-5>----!-->5-@---4-                        
                      P2    P3   !  P3    P2                         
*/
#include<math.h>
#include"out_ext.h"
#include"out_int.h"

namespace anom_aaww {

extern double *Q0, *Q1, *Q2;
extern double va[11];

FNN F1;
double F1(void)
{
double TOTNUM,TOTDEN,RNUM,result;
static double C[85];double S[11];double tmp[1];                             
     
if(calcCoef[1])
{
S[0]=va[10]*va[10]*va[10]*va[10]*va[10]*va[10]*va[10]*va[10]*va[10]*va[10]*
 va[10]*va[10];
C[0]=+40*S[0];
S[1]=va[5]*va[5];
S[2]=va[10]*va[10]*va[10]*va[10]*va[10]*va[10]*va[10]*va[10];
C[1]=+S[2]*(va[4]*(va[4]*(va[4]*(2*va[5]+va[4]+10)+va[5]*(2*va[5]+4)+21)+
 va[5]*(va[5]*(2*va[5]+10)+2)+16)+S[1]*(S[1]+17)+4);
C[2]=+S[2]*(va[4]*(va[4]*(-8*va[5]-6*va[4]-54)+va[5]*(2*va[5]+20)-72)+va[5]*
 (va[5]*(4*va[5]-6)+64)-24);
C[3]=+S[2]*(va[4]*(2*va[5]+va[4]+8)+S[1]-8);
S[3]=va[10]*va[10]*va[10]*va[10]*va[10]*va[10];
C[4]=+S[3]*(va[4]*(va[4]*(va[4]*(-4*va[5]-2*va[4]-20)+va[5]*(2*va[5]-8)-42)+
 va[5]*(va[5]*(8*va[5]+28)-4)-32)+S[1]*(4*S[1]+62)-8);
S[4]=va[10]*va[10]*va[10]*va[10]*va[10]*va[10]*va[10]*va[10]*va[10]*va[10];
C[5]=+80*S[4];
C[6]=+S[2]*(va[4]*(24*va[5]+16*va[4]+12)+va[5]*(8*va[5]-4)-4);
C[7]=+S[3]*(va[4]*(va[4]*(va[4]*(-4*va[4]-12)+va[5]*(2*va[5]+8)-8)+va[5]*(
 va[5]*(4*(va[5]+1))+16)+4)+va[5]*(va[5]*(6*S[1]+8)+8)+4);
C[8]=+S[2]*(8*va[5]+16*va[4]-4);
S[5]=va[4]*va[4];
C[9]=+S[3]*(va[5]*(va[4]*(8*(-va[5]-va[4])-64)+va[5]*(24*(va[5]-1))-32)+
 S[5]*(24*va[4]+48)-24);
C[10]=+S[3]*(va[4]*(4*(-va[5]-1)-6*va[4])+va[5]*(2*va[5]+16)+4);
C[11]=+S[2]*(24*(va[4]+1)+96*va[5]);
C[12]=+S[3]*(va[5]*(va[4]*(8*va[5]+16*va[4]+4)+8*va[5]-12));
C[13]=+S[3]*(va[4]*(24*va[5]+16*va[4]+12)+va[5]*(8*va[5]-4)-4);
S[6]=va[10]*va[10]*va[10]*va[10];
C[14]=+S[6]*(va[4]*(va[4]*(16*(va[5]*(-va[5]-1)+1)+va[4]*(8*va[4]+24))+
 va[5]*(va[5]*(16*va[5]-32)-32)-8)+va[5]*(va[5]*(24*S[1]+8)-16)-8);
C[15]=+S[3]*(va[4]*(-4*va[4]-8)+24*S[1]-4);
C[16]=+S[2]*(va[4]*(26*va[5]+13*va[4]+64)+va[5]*(13*va[5]+80)+12);
C[17]=+S[3]*(va[5]*(va[4]*(20*va[5]+10*va[4]+92)+va[5]*(10*va[5]+80)+88)+
 va[4]*(20*va[4]+44)+24);
C[18]=+S[6]*(va[4]*(va[4]*(va[4]*(4*(1-va[5])+2*va[4])+2-8*va[5])+va[5]*(4*(
 va[5]*(-va[5]-1)-1)))+S[1]*(va[5]*(6*va[5]-16)-6));
C[19]=+S[3]*(va[5]*(8*(va[5]+va[4])+56)+20*va[4]+24);
C[20]=+S[6]*(va[5]*(va[4]*(16*va[4]-28*va[5]-8)+va[5]*(24*va[5]-76)-32)+
 S[5]*(12*(-va[4]-1)));
C[21]=+S[6]*(va[4]*(4*va[5]-6*va[4]-8)+va[5]*(2*va[5]-16)-8);
C[22]=+S[3]*(va[4]*(va[4]*(24*va[5]+6*va[4]+30)+va[5]*(30*va[5]+124)+48)+
 va[5]*(va[5]*(12*va[5]+70)+48)+24);
C[23]=+S[6]*(va[5]*(va[4]*(va[4]*(12*va[5]+2*va[4]+30)+va[5]*(10*va[5]+84)+
 60)+va[5]*(10*va[5]+72)+32));
C[24]=+S[6]*(va[5]*(va[4]*(20*va[5]+10*va[4]+92)+va[5]*(10*va[5]+80)+88)+
 va[4]*(20*va[4]+44)+24);
S[7]=va[10]*va[10];
C[25]=+S[7]*(va[4]*(va[4]*(va[4]*(8*(va[5]-1)-4*va[4])+va[5]*(16-12*va[5])-
 4)+va[5]*(va[5]*(-16*va[5]-40)+8))+S[1]*(va[5]*(24*va[5]-64)-36));
C[26]=+S[6]*(va[4]*(va[4]*(va[4]*(-4*va[5]-2*va[4]-16)+va[5]*(2*va[5]-16)-
 26)+va[5]*(va[5]*(8*va[5]+20)-20)-12)+va[5]*(va[5]*(va[5]*(4*va[5]+16)+6)-
 8));
C[27]=+S[3]*(va[4]*(28*va[5]+2*va[4]+36)+va[5]*(26*va[5]+80)+36);
C[28]=+S[6]*(va[5]*(8*(va[5]*(va[5]+1)-S[5])+4*(1-va[4]))+va[4]*(4*va[4]+8)+
 4);
C[29]=+S[6]*(va[4]*(4-8*va[5])+8*S[1]+4);
C[30]=+S[6]*(va[5]*(va[4]*(48*(va[5]+1)+8*va[4])+va[5]*(40*va[5]+128)+48));
C[31]=+S[7]*(va[5]*(8*(va[5]*(va[5]+1)-S[5])+4*(1-va[4]))+va[4]*(4*va[4]+8)+
 4);
S[8]=va[5]*va[5]*va[5];
C[32]=+S[7]*(va[4]*(va[4]*(4*(va[4]*(va[4]+1)-S[1])-8)+16*S[8]-12)+S[1]*(
 va[5]*(16*va[5]+32)+4)-4);
C[33]=+16*S[6]*S[1];
S[9]=va[5]*va[5]*va[5]*va[5];
C[34]=+16*S[9];
C[35]=+S[4]*(24*(va[4]+1)+32*va[5]);
C[36]=+S[2]*(va[4]*(-8*va[4]-16)+16*S[1]-8);
C[37]=+S[2]*(va[5]*(32*(va[4]+1)));
C[38]=+S[3]*(va[4]*(va[4]*(va[4]*(4*(va[5]+1)+2*va[4])+4*S[1]-10)+va[5]*(
 va[5]*(4*va[5]+20)-12)-24)+va[5]*(va[5]*(2*(S[1]+1))-8)-12);
C[39]=+S[3]*(va[5]*(32*(va[4]+1)));
C[40]=+S[3]*(va[4]*(va[4]*(26*va[5]+8*va[4]+32)+va[5]*(28*va[5]+88)+44)+
 va[5]*(va[5]*(10*va[5]+64)+68)+20);
C[41]=+S[6]*(va[4]*(va[4]*(4*(va[4]*(-va[4]-1)+S[1])+8)+S[1]*(16*(va[5]+1))+
 12)+S[1]*(va[5]*(16*va[5]+32)+12)+4);
C[42]=+S[6]*(va[5]*(va[4]*(va[4]*(20*va[5]+10*va[4]+42)+va[5]*(10*va[5]+76)+
 60)+va[5]*(10*va[5]+56)+28));
C[43]=+S[6]*(va[5]*(va[4]*(16*va[5]+8*va[4]+4)+va[5]*(8*(va[5]+1))-4)+va[4]*
 (-4*va[4]-8)-4);
C[44]=+16*S[7]*S[9];
C[45]=+S[2]*(va[4]*(-4*va[4]-8)+8*S[1]-4);
C[46]=+S[3]*(va[4]*(4*va[4]+8)+8*S[1]+4);
C[47]=+S[6]*(va[4]*(va[5]*(4*(va[5]*(va[5]+1)-S[5]-1)-8*va[4])+va[4]*(10-2*
 S[5])+12)+S[1]*(va[5]*(2*va[5]+16)+6)+4);
C[48]=+24*S[4];
C[49]=+S[3]*(va[5]*(va[4]*(va[4]*(4*va[5]+2*va[4]+18)+va[5]*(2*va[5]+4)+32)+
 2*S[1]+16));
C[50]=+32*S[2];
C[51]=+S[3]*(va[5]*(va[4]*(4*va[5]+2*va[4]+16)+2*S[1]+16));
C[52]=+24*S[2];
C[53]=+S[3]*(va[4]*(va[4]*(6*(-va[4]-1)-8*va[5])+va[5]*(2*va[5]+44)+36)+
 va[5]*(va[5]*(4*va[5]-6)+24)+36);
C[54]=+S[6]*(va[5]*(va[4]*(va[4]*(4*va[5]-6*va[4]-14)+va[5]*(10*va[5]+12)-
 12)+va[5]*(10*va[5]+8)-4));
C[55]=+S[3]*(va[4]*(4*va[5]+2*va[4]-16)+va[5]*(2*va[5]-16)-24);
C[56]=+S[6]*(va[5]*(va[4]*(4*va[5]-6*va[4]-8)+va[5]*(10*va[5]+8)-4));
C[57]=+S[3]*(24*(va[4]+1)+32*va[5]);
C[58]=+S[6]*(va[4]*(va[4]*(va[4]*(4*(-va[5]-1)-2*va[4])+2*S[1]+10)+va[5]*(
 va[5]*(8*va[5]+28)+12)+24)+va[5]*(va[5]*(4*S[1]-2)+8)+12);
C[59]=+S[3]*(va[4]*(16*va[5]+8*va[4]+24)+va[5]*(8*va[5]+40)+20);
C[60]=+S[6]*(va[5]*(va[5]*(32*va[5]+20*va[4]+52)+16*(va[4]+1))+va[4]*(12*
 S[5]-24)-12);
C[61]=+S[7]*(va[5]*(va[4]*(8*(va[5]*(va[5]-va[4]-1)+1)+4*va[4])+8*S[1]+4));
C[62]=+S[6]*(va[5]*(8*va[5]+16*va[4]+32)+8*S[5]);
C[63]=+S[7]*(va[5]*(va[4]*(4-8*va[5])+8*S[1]+4));
C[64]=+S[6]*(va[4]*(va[4]*(26*va[5]+8*va[4]+32)+va[5]*(28*va[5]+88)+44)+
 va[5]*(va[5]*(10*va[5]+64)+68)+20);
C[65]=+S[7]*(va[4]*(va[4]*(4*(va[4]*(va[4]+1)-S[1])-8)+S[1]*(32*va[5]+8)-
 12)+S[1]*(va[5]*(32*va[5]+64)+12)-4);
C[66]=+S[6]*(va[4]*(8*va[5]-4)+8*S[1]-4);
C[67]=+32*S[7]*S[8];
C[68]=+16*S[7]*S[1];
C[69]=+S[7]*(va[5]*(va[4]*(16*va[5]+8*va[4]+4)+va[5]*(8*(va[5]+1))-4)+va[4]*
 (-4*va[4]-8)-4);
C[70]=+32*S[9];
C[71]=+S[2]*(24*(va[4]+1)+32*va[5]);
C[72]=+S[3]*(va[4]*(8*va[4]+16)+32*S[1]+8);
C[73]=+S[3]*(24*(-va[4]-1)+32*va[5]);
C[74]=+S[6]*(va[5]*(va[4]*(va[4]*(2*(va[4]+1)+4*va[5])+va[5]*(2*va[5]-4)-4)+
 va[5]*(2*va[5]-8)-4));
C[75]=+S[6]*(va[4]*(-8*va[4]-16)+32*S[1]-8);
C[76]=+S[6]*(va[4]*(va[4]*(12*(va[4]-1)+32*va[5])+va[5]*(28*va[5]+56)-48)+
 va[5]*(va[5]*(8*va[5]+76)+32)-24);
C[77]=+S[7]*(va[5]*(va[4]*(8*(va[5]*(va[5]+va[4]+1)-1)-4*va[4])+8*S[1]-4));
C[78]=+S[7]*(va[4]*(va[5]*(va[4]*(12*va[5]+8*va[4]+16)+va[5]*(16*va[5]+40)+
 8)+va[4]*(4*S[5]-20)-24)+S[1]*(va[5]*(8*va[5]+64)+36)-8);
C[79]=+16*S[2];
C[80]=+S[6]*(va[5]*(va[5]*(2*va[5]+4*va[4]-8)+2*S[5]-4));
C[81]=+S[6]*(va[5]*(6*va[5]+12*va[4]+16)+6*S[5]);
C[82]=+S[7]*(va[5]*(va[4]*(8*va[5]-4)+8*S[1]-4));
C[83]=+4*S[2];
S[10]=va[8]*va[8]*va[8]*va[8];
C[84]=+S[10];
}
TOTNUM=-C[84];
TOTDEN=+C[83];
tmp[0]=+DP[3]*(DP[3]*(DP[2]*(DP[3]*(DP[0]*(C[61]-C[70]*DP[5])+DP[1]*(-C[31]-
 C[70]*DP[4])+DP[2]*(C[34]*DP[3]-C[32])+C[67]*DP[3]-C[30]-C[77]*DP[4]+C[69]*
 DP[5])+DP[0]*(C[25]*DP[1]-C[23]+C[65]*DP[5])+DP[4]*(C[42]+C[65]*DP[1]-
 C[78]*DP[5])+C[22]+C[24]*DP[1]+C[26]*DP[2]-C[64]*DP[5])+DP[0]*(DP[5]*(
 C[60]+C[61]*DP[0]+C[63]*DP[1]-C[67]*DP[3]+C[77]*DP[4]+C[82]*DP[5])+DP[4]*(
 C[44]*DP[3]-C[41]-C[61]*DP[1])+C[20]*DP[1]-C[17]-C[18]*DP[0]+C[28]*DP[3])+
 DP[1]*(DP[4]*(C[60]-C[63]*DP[1]-C[67]*DP[3]-C[77]*DP[4]-C[82]*DP[5])+DP[3]*
 (-C[29]-C[68]*DP[5])+C[19]+C[21]*DP[1]+C[62]*DP[5])+DP[3]*(C[33]*DP[3]-
 C[27]-C[43]*DP[4]+C[66]*DP[5])+DP[4]*(C[40]+C[47]*DP[4]-C[76]*DP[5])+DP[5]*
 (-C[59]-C[81]*DP[5])+C[16])+DP[0]*(DP[5]*(-C[53]-C[54]*DP[0]-C[56]*DP[1]-
 C[58]*DP[2]-C[74]*DP[4]-C[80]*DP[5])+DP[1]*(C[54]*DP[4]-C[9]-C[14]*DP[2])+
 C[6]+C[7]*DP[0]+C[12]*DP[2]+C[38]*DP[4])+DP[4]*(DP[1]*(C[56]*DP[1]-C[53]-
 C[58]*DP[2]+C[74]*DP[4]+C[80]*DP[5])+DP[2]*(C[39]-C[75]*DP[5])+C[71]+C[46]*
 DP[4]-C[73]*DP[5])+DP[1]*(C[10]*DP[1]-C[8]-C[13]*DP[2]+C[55]*DP[5])+DP[2]*(
 C[11]+C[15]*DP[2]-C[57]*DP[5])+C[5]-C[52]*DP[5]);
RNUM=+DP[0]*(DP[1]*(C[2]+C[4]*DP[2]-C[49]*DP[4]+C[51]*DP[5])+DP[5]*(C[49]*
 DP[0]-C[71]-C[72]*DP[2])+C[35]-C[1]*DP[0]+C[37]*DP[2]+C[36]*DP[4])+DP[4]*(
 DP[1]*(-C[71]-C[51]*DP[1]-C[72]*DP[2])+DP[2]*(C[72]*DP[5]-C[37])+C[71]*
 DP[5]-C[35]-C[45]*DP[4])+DP[1]*(-C[48]-C[3]*DP[1]-C[71]*DP[2]-C[50]*DP[5])+
 DP[2]*(C[71]*DP[5]-C[35]-C[45]*DP[2])+DP[5]*(C[48]+C[79]*DP[5])-C[0]+
 tmp[0];
result=RNUM*(TOTNUM/TOTDEN)*Q2[1];
 if(result>Fmax) Fmax=result; else if(result<-Fmax) Fmax=-result;
 return result;
}

} //namespace anom_aaww
