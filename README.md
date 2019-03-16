# String
详细解释了string 四种赋值方法
1.常函数直接赋值法，const char* string_1
  以常字符串来给字符串赋值，前为const生成常字符串数组,字符串长度为字符串元素数量+1，最后一位为‘\0’
2.直接赋值法，char string_2[]，
  长度为元素数量，后为越界/？
3.数组定长赋值法，char string_3[30] = { 'a' }
  长度为30，以后的每一位则为'\0'
4.malloc赋值法，char* string_4 =(char*)malloc(20 * sizeof(char));
  长度为20个字节，且以后每一位为'\?'
  
strcpy_s用法与strcat_s区别
strcpy_s:
	errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, char const * _Source)	C:\Program Files (x86)\Windows Kits\10\Include\10.0.17763.0\ucrt\string.h	28	14	
变量一，开始拷贝地址目标指针，变量二，变量const*_sourse的容量大小，变量三，字符串之源
活用法：指针+1，则从第二位开始拷贝

strcat_s():
  将第二个变量粘贴到第一个末尾，但是只能粘在末尾不能改变位置
