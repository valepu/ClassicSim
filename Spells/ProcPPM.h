#pragma once

#include "Proc.h"
#include "ProcInfo.h"

class ProcPPM : public Proc {
public:
    ProcPPM(const QString& name,
            const QString& icon,
            const int weapon,
            const double ppm,
            const double inner_cooldown,
            const QVector<Proc*>& linked_procs,
            const QVector<ProcInfo::Source>& proc_sources,
            Character* pchar);
    virtual ~ProcPPM() override;

    virtual void proc_effect() override = 0;

    virtual unsigned get_proc_range() const override;

protected:
    const double proc_rate_base;
    const int weapon;
};
