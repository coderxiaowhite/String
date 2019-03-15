#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main() {
	
	/*the four ways to assignment string*/
	const char* string_1 = "hello";//const char
	char string_2[] = {'g','g'};//char[2]
	char string_3[20] = { 'a' };//char[20],string_3[1to19]='\0'
	char* string_4 =(char*)malloc(20 * sizeof(char));//malloc must be checked,string_4[4]='\0',string_4[10]error
	if (string_4) {
		/*strcpy/strcpy_s:copy sourse and assignment to new strings*/
		strcpy_s(string_4, 5, "awsl");//将常字符串拷贝到string_4指针开始的位置,5为字符串长度
		strcpy_s(string_3 + 1, 5, string_4);//将常字符串拷贝到string_4+1指针开始的位置
		printf("%c\n", string_4[4]);
		printf("%s\n", string_3);
		strcat_s(string_3,string_4);
		strcpy_s(string_3, 10,string_4);
		//merge founcation:string_4 will replace the last string_3("\0") from the begin to the end 
		//and the formal "\0" will also be repalaced,the  formal parameter is not a point 
		if (strcmp(string_3, string_4))
		{
			/*0:equal
			posivate:the later is less*/
			printf("0 is not  the key\n");
		}
	}
	return 0;
}