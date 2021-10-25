def TowerOfHanoi(n , from_rod, to_rod,b, d, e , f):
    if n == 1:
        print("Move disk 1 from rod",from_rod,"to rod",to_rod)
        return
    TowerOfHanoi(n-1, from_rod, b,d,e,f, to_rod)
    print("Move disk",n,"from rod",from_rod,"to rod",to_rod)
    TowerOfHanoi(n-1, b, d, e, f, to_rod, from_rod)
         

n = 3
TowerOfHanoi(n, 'A', 'C', 'B', "D", "E", "F")