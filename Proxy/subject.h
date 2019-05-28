#ifndef SUBJECT_H
#define SUBJECT_H

// 电信运营商
class Telco {
public:
	virtual ~Telco() {}
	virtual void Recharge(int money) = 0;  // 充值
};

#endif // SUBJECT_H