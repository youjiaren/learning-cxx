static unsigned long long fibonacci(int i) {
    // TODO: 为缓存设置正确的初始值
    static unsigned long long cache[96], cached = 2;
    // 初始化基底，仅首次调用执行
    static bool init = true;
    if (init) {
        cache[0] = 0;
        cache[1] = 1;
        init = false;
    }
    // TODO: 设置正确的循环条件
    for (; cached < i; ++cached) {
        // 仅cached>=2才递推，避免下标越界
        cache[cached] = cache[cached - 1] + cache[cached - 2];
    }
    return cache[i];
}
