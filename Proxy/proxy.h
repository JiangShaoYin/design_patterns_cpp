#ifndef PROXY_H
#define PROXY_H

#include "subject.h"
#include "real_subject.h"
#include <iostream>

// �����
class Proxy : public Telco{
public:
	Proxy()
	: CMCC_(NULL) {}
	~Proxy() { delete CMCC_; }

	// ���� 50 ����
	void Recharge(int money) override {
		if (money >= 50) {
			if (CMCC_ == NULL)
				CMCC_ = new CMCC();
			CMCC_->Recharge(money);
		}
		else {
			std::cout << "Sorry, too little money" << std::endl;
		}
	}

private:
	CMCC *CMCC_;
};

#endif // PROXY_H