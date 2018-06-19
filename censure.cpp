
#include <opencv2/opencv.hpp>
#include "functions.h"

 
 
using namespace std;
using namespace cv;

 
 
int main(int argc,char** argv)
{
    // Load Face Detector
    CascadeClassifier faceDetector("haarcascade_frontalface_alt2.xml");

 
    // Set up webcam for video capture
    VideoCapture cam(0);
    if(!cam.isOpened()){

        cout << "the cam failed to open" << endl;
        return -1;
      }
     
    // Variable to store a video frame and its grayscale 
    Mat frame;
     
    // Read a frame
    for(;;)

    {
      cam >> frame ;
      URUgly(frame, faceDetector);

      if (waitKey(2) >= 0) break;
       
    }
    return 0;
}