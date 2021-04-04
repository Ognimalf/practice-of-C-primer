    class NoDefault{
    public:
        NoDefault(int n): num(n) { }
        int num = 0;
    };
    class C{
    public:
        C(NoDefault n): member(n) { }
        NoDefault member;
    };
    NoDefault n(2);
    C exmaple(n);
    cout << exmaple.member.num;