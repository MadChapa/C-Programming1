/* paper of size A0 has dimensions 1189 mm* 841 mm.Each subsequent size A(n) is defined as A(n-1) cut in half 
paper to its shorter sides. Thus paper of size A1 would have dimension 841mm *594mm. wap to calculate and
print paper sizes   A0,A1,......A8. */


/* Solution....
for A0
width=1189
height=841

for A1:
 width= 841      previous ko height vaneko new ko width hunxa
 height=1189/2 =594       previous ko width/2 vaneko new ko height hunxa

 for A2:

 width= 594
 height=841/2 

 same processs...................

*/

#include<stdio.h>
int main()
{
    int i, w=1189, h=841, temp;
     for(i=0;i<9;i++)
     {
         printf("\n A%d: %d * %d", i, w, h);
         temp = h;
         h = w;
        w = temp/2;
     }
     return (0);
}