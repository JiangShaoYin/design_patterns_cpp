#include "concrete_bulider.h"
#include "director.h"
#include <string>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main(){
    Director *director = new Director();

    ThinkPadBuilder *TP_Builder = new ThinkPadBuilder();
    YogaBuilder *Yoga_Builder = new YogaBuilder();

    // 组装 ThinkPad、Yoga
	director->Create(TP_Builder);
	director->Create(Yoga_Builder);

    // 获取组装后的电脑
    Computer *ThinkPadComputer = TP_Builder->GetResult();
    Computer *YogaComputer = Yoga_Builder->GetResult();

    // 测试输出
    cout << "-----ThinkPad-----" << endl;
    cout << "CPU: " << ThinkPadComputer->GetCPU() << endl;
    cout << "Mainboard: " << ThinkPadComputer->GetMainboard() << endl;
    cout << "Ram: " << ThinkPadComputer->GetRam() << endl;
    cout << "VideoCard: " << ThinkPadComputer->GetVideoCard() << endl;

    cout << "-----Yoga-----" << endl;
    cout << "CPU: " << YogaComputer->GetCPU() << endl;
    cout << "Mainboard: " << YogaComputer->GetMainboard() << endl;
    cout << "Ram: " << YogaComputer->GetRam() << endl;
    cout << "VideoCard: " << YogaComputer->GetVideoCard() << endl;

	SAFE_DELETE(ThinkPadComputer);
	SAFE_DELETE(YogaComputer);
	SAFE_DELETE(TP_Builder);
	SAFE_DELETE(Yoga_Builder);
	SAFE_DELETE(director);

	getchar();

    return 0;
}
