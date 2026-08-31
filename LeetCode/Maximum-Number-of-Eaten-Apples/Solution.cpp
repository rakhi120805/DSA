    n = len(apples)
    res = 0
    current_date = 1

    for i in range(n):
        if current_date < i + 1:
            current_date = i + 1

        # Shows on which day apples[i] will be rotten
        exp_date = i + days[i] + 1 
        if days[i] == 0:
            continue
        
        # if apples[i] is not rotten
        if current_date < exp_date:
            
            # Shows count of apples that could possibly be eaten before exp_date
            max_apples_to_eat = exp_date - current_date 

            # if count of apples that could possibly be eaten less apples[i]
            if max_apples_to_eat >= apples[i]:
                apples_to_eat = apples[i]
            else:
                apples_to_eat = max_apples_to_eat
            
            # Shows on which day apples will be fully eaten
            current_date += apples_to_eat 
            res += apples_to_eat 

    return res