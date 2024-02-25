def update_term_freq(matrix, term_index, doc_index, freq):
    matrix[doc_index][term_index] = freq

def get_term_freq(matrix, term_index, doc_index):
    return matrix[doc_index][term_index]

def get_doc_freq(matrix, term_index):
    TDocFreq = 0
    for doc_index in range(len(matrix)):
        TDocFreq += 1 if matrix[doc_index][term_index] > 0 else 0
    return TDocFreq

def get_total_terms_in_doc(matrix, doc_index):
    return sum(matrix[doc_index])

def to_sparse_matrix(matrix):
    sparse = [[val for val in row if val != 0] for row in matrix]
    count = sum(len(row) for row in sparse)
    print("Sparse Matrix:")
    for row in sparse:
        print(" ".join(map(str, row)))
    print("Number of non-zero elements:", count)

matrix = [[23, 39, 4, 0, 20],
          [34, 5, 54, 0, 0],
          [3, 30, 3, 2, 22],
          [1, 2, 0, 0, 32],
          [23, 5, 6, 5, 4]]

update_term_freq(matrix, 3, 4, 69)
update_term_freq(matrix, 4, 3, 0)  # Corrected index from 5 to 3
update_term_freq(matrix, 2, 2, 96)  # Corrected index from 3 to 2
print("Term Frequency for term_index=3, doc_index=4:", get_term_freq(matrix, 3, 4))
print("Term Frequency for term_index=2, doc_index=3:", get_term_freq(matrix, 2, 3))
print("Term Frequency for term_index=1, doc_index=1:", get_term_freq(matrix, 1, 1))
print("Document Frequency for term_index=3:", get_doc_freq(matrix, 3))
print("Total terms in document with doc_index=2:", get_total_terms_in_doc(matrix, 2))
to_sparse_matrix(matrix)
