#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	string text;
	int q,d_point_x,d_point_y,x,y,update_x,update_y;
	scanf("%d\n",&q);
	while(q != 0){
		scanf("%d %d\n",&d_point_x,&d_point_y);
		for(int i =0;i<q;i++){
			scanf("%d %d\n",&x,&y);
			update_x = x-d_point_x;
			update_y = y-d_point_y;
			if (update_x  == 0 ||update_y ==0){
				text = text+ string("divisa\n");
			}
			else if(update_x > 0 && update_y >0){
					text = text+ string("NE\n");
			}
			else if(update_x < 0 && update_y >0){
					text = text+ string("NO\n");
			}
			else if(update_x < 0 && update_y <0){
					text = text+ string("SO\n") ;
			}
			else if (update_x >0 && update_y<0){
					text = text+ string("SE\n");
			}
			
		}
		scanf("%d",&q);
		
	}
	cout << endl << text;
	return 0;
}

