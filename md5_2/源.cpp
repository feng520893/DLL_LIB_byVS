#include "../md5/md5.h"

#if !dynamic_link
//#pragma comment(lib,"md5.lib")
#pragma message("--温馨提示：请确保配置类型为静态库(.lib)")
#else
#pragma message("--温馨提示：请确保配置类型为动态库(.dll)")
#endif

int main(int agr,char* agv[])
{
	/*char md5[33],str[1024];
	if(agr>1)
	{
		sprintf(str,"c++ %s",1+strrchr(agv[1],'\\'));
		system(str);
		sprintf(str,"a <fin.txt >out.txt");
		system(str);
		system("echo 已将输出数据保存到 out.txt，正在校对输出是否正确...");
		MD5 fileMD5;
		if(fileMD5.fileMd5(md5,"out.txt"))
			printf("\n程序输出结果文件'%s'的md5值为：\n%s\n\n","out.txt",md5);
		if(fileMD5.fileMd5(md5,"fout.txt"))
			printf("标准输出结果文件'%s'的md5值为：\n%s\n\n","fout.txt",md5);
		getchar();
	}*/
	char md5[33];
	if(agr<2)
	{
		char str[10240];
		while(gets(str))
			puts(getStrMd5(md5,str));
	}else
	{
		MD5 fileMD5;
		if(fileMD5.fileMd5(md5,agv[1]))
			printf("文件'%s'的md5值为：\n%s\n\n",agv[1],md5);
		else
			puts("传入的不是一个有效的可访问的文件！\n");
	}
	getchar();
	return 0;
}