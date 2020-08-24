/*判断点是否在多边形内*/
int pnpoly (int nvert, float *vertx, float *verty, float testx, float testy) {
    int i, j, c = 0;
    for (i = 0, j = nvert-1; i < nvert; j = i++) {
        if ( ( (verty[i]>testy) != (verty[j]>testy) ) &&
(testx < (vertx[j]-vertx[i]) * (testy-verty[i]) / (verty[j]-verty[i]) + vertx[i]) )
            c = !c;
    }
    return c;
}
/*
首先，参数nvert 代表多边形有几个点。浮点数testx, testy代表待测试点的横坐标和纵坐标，*vertx,*verty分别指向储存多边形横纵坐标数组的首地址。
我们注意到，每次计算都涉及到相邻的两个点和待测试点，然后考虑两个问题：
1. 被测试点的纵坐标testy是否在本次循环所测试的两个相邻点纵坐标范围之内？即
verty[i] <testy < verty[j]
或者
verty[j] <testy < verty[i]
2. 待测点test是否在i,j两点之间的连线之下*/

/*随便画个多边形，随便定一个点，然后通过这个点水平划一条射线，先数数看这条
射线和多边形的边相交几次，（或者说先排除那些不相交的边，第一个判断条件），
然后再数这条射线穿越多边形的次数是否为奇数，如果是奇数，那么该点在多边形内，如果是偶数，则在多边形外。*/