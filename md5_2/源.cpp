#include "../md5/md5.h"

#if !dynamic_link
//#pragma comment(lib,"md5.lib")
#pragma message("--��ܰ��ʾ����ȷ����������Ϊ��̬��(.lib)")
#else
#pragma message("--��ܰ��ʾ����ȷ����������Ϊ��̬��(.dll)")
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
		system("echo �ѽ�������ݱ��浽 out.txt������У������Ƿ���ȷ...");
		MD5 fileMD5;
		if(fileMD5.fileMd5(md5,"out.txt"))
			printf("\n�����������ļ�'%s'��md5ֵΪ��\n%s\n\n","out.txt",md5);
		if(fileMD5.fileMd5(md5,"fout.txt"))
			printf("��׼�������ļ�'%s'��md5ֵΪ��\n%s\n\n","fout.txt",md5);
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
			printf("�ļ�'%s'��md5ֵΪ��\n%s\n\n",agv[1],md5);
		else
			puts("����Ĳ���һ����Ч�Ŀɷ��ʵ��ļ���\n");
	}
	getchar();
	return 0;
}