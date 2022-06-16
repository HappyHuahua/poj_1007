# poj_1007
ACM-Training: POJ-1007

Description:
One measure of ``unsortedness'' in a sequence is the number of pairs of entries that are out of order with respect to each other. For instance, in the letter sequence ``DAABEC'', this measure is 5, since D is greater than four letters to its right and E is greater than one letter to its right. This measure is called the number of inversions in the sequence. The sequence ``AACEDGG'' has only one inversion (E and D)---it is nearly sorted---while the sequence ``ZWQM'' has 6 inversions (it is as unsorted as can be---exactly the reverse of sorted).

You are responsible for cataloguing a sequence of DNA strings (sequences containing only the four letters A, C, G, and T). However, you want to catalog them, not in alphabetical order, but rather in order of ``sortedness'', from ``most sorted'' to ``least sorted''. All the strings are of the same length.
问题描述: 
序列中“未排序”的一个度量是相互无序的条目对的数量。例如，在字母序列“DAABEC”中，这个度量值是5，因为D大于其右侧的四个字母，E大于其右侧的一个字母。这个度量称为序列中的倒数。序列“AACEDGG”只有一个反转（E和D）——几乎已排序——而序列“ZWQM”有6个反转（尽可能未排序——正好与排序相反）。
您负责对DNA字符串序列（仅包含四个字母a、C、G和T的序列）进行编目。但是，您希望将它们分类，而不是按字母顺序，而是按“排序”的顺序，从“排序最多”到“排序最少”。所有字符串的长度都相同。

解题思路：
  分析完题目，发现是求多个字符串的逆序数，并将求出来的逆序数进行排序进而按从小到大输出其相对应的字符串。
  
解题方法： 
  （1）先按题目要求输入两个整数n，m。n，m分别代表每个字符串的长度、字符串的数量，即m行n列。
  （2）建立相应的逆序数数组或者与相应的字符串构成结构体，本程序采取字符串和它的逆序数构成的结构体方法。
  （3）分别对每一个的字符串求其逆序数。
  （4）按求出来的逆序数从小到大的顺序输出相对应的字符串。
  在第（3）步里面，求逆序数的方式可以采取的方式可以是采用蛮力法和归并排序的同时求逆序数。由于本题的要求是0 < m <= 100且0 < n <= 50，数据量并不大，故本题采用蛮力法更优。

出错次数：10次 
出错原因：
  每个编译器对代码的编译方式不一样，忘了加string头文件时，在本地编译测试能通过，在POJ平台上不能编译成功
  在第（4）步的时候，很容易因为某个变量名称混淆以及语句放置的位置不当，而导致不能得到正确答案。
  

心得体会： 
  应该看清楚题目的要求，输入的值范围多大，是否可以避繁就简，采用更合适的算法答题。
  应冷静下来，理清思路后再动手写每一个步骤的代码，这样能节省需要调试的时间。
