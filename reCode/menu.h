#include<iostream>
#include <string.h>
#include<string>
using namespace std;
class menu{
    public:
void info(); // Thông tin của Sinh viên làm đề tài
int mainMenu();// Menu chính của chương trình
int Menu_Display();// Menu hiển thị
int Menu_ChinhSua();// Menu chỉnh sửa thông tin
int Menu_Them();// Menu thêm thông tin
int Menu_Xoa();// Menu xóa thông tin
int Menu_SoLuongBao();// Menu thống kê số lượng báo 
int Menu_TimBao();// Menu tìm kiếm báo
int Menu_SapXepBao();// Menu sắp xếp báo

int Menu2_ThemBao();

int Menu2_ChinhSuaBao(string);
int Menu2_ChinhSuaTapChi(string);
int Menu2_ChinhSuaTacGia(string);

};