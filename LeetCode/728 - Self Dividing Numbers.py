class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        div_numbers = []
        for i in range(left, right + 1):
            int_list = [int(d) for d in str(i)]
            if 0 not in int_list:
                div_flag = True
                for num in int_list:
                    if i % num != 0:
                        div_flag = False
                        break
                if div_flag == True:
                    div_numbers.append(i)
        return div_numbers
