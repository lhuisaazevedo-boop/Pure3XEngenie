#!/bin/sh
# build_and_report.sh — roda build, salva log e gera resumo de erros
# Usage:
#   chmod +x build_and_report.sh
#   ./build_and_report.sh

LOG=build.log
REPORT=Build_error.report

# roda gradle com stacktrace e info, salva tudo no log
./gradlew :AndroidRuntime:app:assembleDebug --stacktrace --info 2>&1 | tee "$LOG"

# resumo: procura por falhas e avisos importantes
echo "=== BUILD SUMMARY ===" > "$REPORT"
if grep -q "BUILD FAILED" "$LOG"; then
  echo "BUILD FAILED" >> "$REPORT"
else
  echo "BUILD SUCCESSFUL" >> "$REPORT"
fi

echo "" >> "$REPORT"
echo "=== ERROS (linhas que contêm 'error:' ou 'FAILURE') ===" >> "$REPORT"
grep -n -E "error:|FAILURE|undefined reference|ld: error|fatal error|BUILD FAILED" "$LOG" >> "$REPORT" || true

echo "" >> "$REPORT"
echo "=== WARNINGS (deprecated / note) ===" >> "$REPORT"
grep -n -E "deprecated|Note:|warning:" "$LOG" >> "$REPORT" || true

echo "" >> "$REPORT"
echo "=== TOP STACKTRACES/EXCEPTIONS ===" >> "$REPORT"
# extrai blocos simples de exceção Java (padrão heurístico)
awk '/Exception in thread|java.lang.|FATAL EXCEPTION/ {print "-- at line " NR ": " $0; for(i=1;i<=40;i++){ if(getline){ print "    ", $0 } else break }}' "$LOG" >> "$REPORT" || true

echo "" >> "$REPORT"
echo "Relatório salvo em: $REPORT  — log completo em: $LOG"

# garantir permissões do relatório
chmod 644 "$REPORT" 2>/dev/null || true

exit 0
