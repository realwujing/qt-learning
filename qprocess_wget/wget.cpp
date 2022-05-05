#include "wget.h"

Wget::Wget() : wgetProcess(new QProcess(this)), wgetFilePath("/usr/bin/wget")
{
    // wgetProcess = new QProcess(this);
    // connect(wgetProcess, SIGNAL(readyReadStandardOutput()), this, SLOT(readOutput()));
    // connect(wgetProcess, SIGNAL(readyReadStandardError()), this, SLOT(readError()));
    // connect(wgetProcess, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(finished(int, QProcess::ExitStatus)));
}

Wget::~Wget()
{
    delete wgetProcess;
}

bool Wget::download()
{
    args << url << fileName;
    args << "--no-check-certificate" << url;
    wgetProcess->start(wgetFilePath, args);
}
