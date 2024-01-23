# def count_favourite_singers(n, songs):
# 	 singer_count = {}
# 	for singer in songs:        
# 		singer_count[singer] = singer_count.get(singer, 0) + 1        # Find the maximum count    
# 		max_count = max(singer_count.values())        # Count the number of singers with the maximum count    
# 		fav_singers_count = sum(1 for count in singer_count.values() if count == max_count)        
# 		return fav_singers_count

# # Read 
# inputn = int(input())songs = list(map(int, input().split()))

# # Output the result
# result = count_favourite_singers(n, songs)print(result)