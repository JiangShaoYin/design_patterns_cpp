#ifndef SUBJECT_H
#define SUBJECT_H

// ������Ӫ��
class Telco {
public:
	virtual ~Telco() {}
	virtual void Recharge(int money) = 0;  // ��ֵ
};

#endif // SUBJECT_H