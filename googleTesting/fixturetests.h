#ifndef FIXTURETESTS_H
#define FIXTURETESTS_H
#include <gtest/gtest.h>

struct bankAccount
{
    double balance;
    explicit bankAccount(double balance=0):balance{balance}{};
    void deposit(const int S)
    {
        if(S<0) throw std::invalid_argument("deposit sum must be positive");
        balance+=S;
    }
};


class bankAccountTest: public ::testing::Test
{
protected:
    void SetUp()
    {
        account=bankAccount{0};
    }

    void TearDown()
    {

    }

    bankAccount account;
};

TEST_F(bankAccountTest, initialization)
{
    EXPECT_NEAR(account.balance,0,1E-14);
}

TEST_F(bankAccountTest,canDeposite)
{
    EXPECT_ANY_THROW(account.deposit(-4));
    account.deposit(100);
    EXPECT_EQ(100,account.balance);
}


#endif // FIXTURETESTS_H
