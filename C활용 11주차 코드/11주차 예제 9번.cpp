#include <stdio.h>

int main(void){
	
	FILE *file1, *file2;
	char filename[100];
	char buffer[1024];
	int r_count;
	
	printf("file name:");
	scanf("%s", filename);
	
	file1= fopen(filename,"rb");
	file2= fopen("copy.jpg","wb");
	if(file1==NULL||file2==NULL){
		fprintf(stderr,"error1\n");
		return 1;
	}
	
	while((r_count=fread(buffer,1,sizeof(buffer),file1))>0){
		int w_count=fwrite(buffer,1,r_count,file2);
		if(w_count<0){
			fprintf(stderr,"error2\n");
			return 1;
		}
		if(w_count<r_count){
			fprintf(stderr,"error3\n");
			return 1;
		}
	}
	printf("Ok\n");
	fclose(file1);
	fclose(file2);
	return 0;
}
