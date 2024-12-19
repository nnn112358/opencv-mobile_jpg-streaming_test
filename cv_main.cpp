#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::VideoCapture cap;
    cap.open(0);

    cv::VideoWriter http;
    http.open(7766);

    cv::Mat bgr;
    while (1)
    {
        cap >> bgr;
        http << bgr;
    }

    return 0;
}
