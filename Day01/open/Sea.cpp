#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main() {
	//��ȡͼƬ�ļ�
	Mat src = imread("./timg.jpg");
	if (src.empty()) {
		printf("�ļ������ڡ�����");
		return -1;
	}
	//����һ������
	namedWindow("test opencv setup", CV_WINDOW_AUTOSIZE);
	//�ڴ�������ʾͼƬ
	imshow("test opencv setup", src);
	//��һ��������ʱ����(��λms)�ȴ��û���������;����û�û�а��� ��,������ȴ�(ѭ��)
	//waitKey(0)����ѭ���ȴ�
	waitKey(0);

	return 0;
}
