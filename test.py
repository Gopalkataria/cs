def format_duration( seconds ):
    minutes = seconds // 60
    seconds %= 60
    hours = minutes // 60
    minutes %= 60
    days = hours // 24
    hours %= 24
    years = days // 365
    days %= 365
    time = {
        "years":years ,
        "days": days  ,
        "hours": hours   ,
        "minutes": minutes  ,
        "seconds" : seconds
    }

    final_str = ""
    for k , v in time.items() :
        if v > 1 :
            final_str += ", {} {}".format( v , k )
        elif v == 0 :
            pass
        else :
            final_str += ", {} {}".format( v , k[:-1])

    final_str = final_str.strip(", ")
    if len(time) > 1 :
        k = final_str.split(",")
        final_str = ','.join(k[ : -1 ]) + " and" + k[-1]
    return final_str
