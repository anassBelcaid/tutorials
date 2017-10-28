TEST(squareRootTest, PositiveNos)
{
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
}

TEST(squareRootTest, NegativeNos)
{
    ASSERT_EQ(-1.0, squareRoot(-15.0));
    ASSERT_EQ(-1.0, squareRoot(-0.2));
}
TEST(dichotomie, linear)
{
    auto f1=[](double x){return x;};
    ASSERT_DOUBLE_EQ(0.0,dichotomie(f1,-3,1,1E-7));
    ASSERT_ANY_THROW(dichotomie(f1,1,3));
}
TEST(dichotomie, quadratic)
{
    auto f=[](double x){return x*x-1;};
    ASSERT_DOUBLE_EQ(1,dichotomie(f,0,2));
    EXPECT_DOUBLE_EQ(-1,dichotomie(f,-4,0));
    ASSERT_ANY_THROW(dichotomie(f,-2,2));
}
