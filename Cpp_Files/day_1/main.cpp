// #include <iostream>
// #include <opencv2/opencv.hpp>

// using namespace std;
// using namespace cv;

// int main(int, char**) {
//     cout << "Hello, wrld!\n";
//     //Mat img = imread("E:/MOODLE/SEMESTER 4/EN2550-Image_Vision/Excercises/EN2550_ImageProcessingAndMachineVision/Cpp_Files/day_1/images/tom_dark.jpg",0);
//     // if (img.data){
//     //         namedWindow("Display Image",WINDOW_AUTOSIZE);
//     //         imshow("Image",img);
//     //         waitKey(0);
//     // }
//     cout << "Hello, world!\n";
//     return 0;
// }

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
 // Read the image file
 Mat image = imread("E:/MOODLE/SEMESTER 4/EN2550-Image_Vision/Excercises/EN2550_ImageProcessingAndMachineVision/Cpp_Files/day_1/images/tom_dark.jpg");

 // Check for failure
 if (image.empty()) 
 {
  cout << "Could not open or find the image" << endl;
  cin.get(); //wait for any key press
  return -1;
 }
cout << "Could open or find the image" << endl;
 String windowName = "The Guitar"; //Name of the window

 namedWindow(windowName); // Create a window

 imshow(windowName, image); // Show our image inside the created window.

 waitKey(0); // Wait for any keystroke in the window

 destroyWindow(windowName); //destroy the created window

 return 0;
}