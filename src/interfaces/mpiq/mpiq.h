#ifndef MPIQ_H
#define MPIQ_H

#include <mpi.h>

int MPIQ_Init(int * argc, char *** argv);
int MPIQ_Init_thread(int * argc, char *** argv, int required, int * provided);
int MPIQ_Finalize(void);
int MPIQ_Comm_dup(MPI_Comm comm, MPI_Comm *newcomm);
int MPIQ_Errhandler_set(MPI_Comm comm, MPI_Errhandler errhandler);
int MPIQ_Comm_rank(MPI_Comm comm, int *rank);
int MPIQ_Comm_size(MPI_Comm comm, int *size);
int MPIQ_Barrier(MPI_Comm comm);
int MPIQ_Bcast(void *buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm);
int MPIQ_Abort(MPI_Comm comm, int errorcode);
int MPIQ_Irecv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request *request);
int MPIQ_Send(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm);
int MPIQ_Waitany(int count, MPI_Request array_of_requests[], int *indx, MPI_Status *status);

#endif
