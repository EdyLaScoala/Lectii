#include <iostream>

using namespace std;

int n=0, nr=0;
int v[1000];

int f(int i, int nr)
{
    if(v[i]==nr) return i;
    else if(nr < v[i]) return f(i/2, nr);
    else return f(i*2-i/2, nr);
}

int main()
{
    
    cin >> n;
    
    for(int i=0; i<n; i++) cin >> v[i];
    cin >> nr;
    cout << f(n/2, nr);

    return 0;
}

// https://www.olx.ro/d/oferta/laptop-gaming-lenovo-legion-5-amd-ryzen-7-7745hx-32gb-rtx-4070-8gb-1tb-IDiDg0T.html
// https://www.olx.ro/d/oferta/laptop-gaming-lenovo-legion-y740-gpu-nvidia-rtx-2070-pt-piese-IDhB8rJ.html
// https://www.olx.ro/d/oferta/laptop-gaming-asus-rog-strix-g153ic-procesor-amd-rtx-3050-IDhaqj1.html
// https://www.olx.ro/d/oferta/laptop-gaming-hp-victus-amd-ryzen-7-5800h-rtx-3060-6gb-IDiFyGA.html
// 