#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main() {
	//读取图片文件
	Mat src = imread("./timg.jpg");
	if (src.empty()) {
		printf("文件不存在。。。");
		return -1;
	}
	//创建一个窗口
	namedWindow("test opencv setup", CV_WINDOW_AUTOSIZE);
	//在窗口中显示图片
	imshow("test opencv setup", src);
	//在一个给定的时间内(单位ms)等待用户按键触发;如果用户没有按下 键,则接续等待(循环)
	//waitKey(0)无限循环等待
	waitKey(0);

	return 0;
}
