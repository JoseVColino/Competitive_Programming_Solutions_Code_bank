class Node:
    def __init__(self,data):
        self.data = data
        self.prev = None
        self.next = None

class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def append(self, data):
        if self.head is None:
            self.tail = Node(data)
            self.head = self.tail
            return True
        aux = self.head
        self.head = Node(data)
        self.head.prev = aux
        aux.next = self.head

    def print_tail_to_head(self):
        head_ptr = self.tail
        while head_ptr is not None:
            print(head_ptr.data)
            head_ptr = head_ptr.next


def bubble_sort(arr):
    arr_cp = arr
    len_arr = len(arr_cp)
    for i in range(len_arr):
        for j in range(len_arr-i-1):
            if arr_cp[j] > arr_cp[j+1]:
                aux = arr_cp[j]
                arr_cp[j] = arr_cp[j+1]
                arr_cp[j+1] = aux
    return arr_cp





if __name__ == '__main__':
    # list = DoublyLinkedList()
    # list.append(1)
    # list.append(2)
    # list.append(3)

    # list.print_tail_to_head()

    arr = [1, 5, 3, 4, 10, 9, 1, 4, 7, 2]
    print(arr)
    print(bubble_sort(arr))
