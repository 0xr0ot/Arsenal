// 
// Decompiled by Procyon v0.5.30
// 

package android.support.v4.view;

import android.view.View;

class ViewCompatMarshmallow
{
    public static int getScrollIndicators(final View view) {
        return view.getScrollIndicators();
    }
    
    public static void setScrollIndicators(final View view, final int scrollIndicators) {
        view.setScrollIndicators(scrollIndicators);
    }
    
    public static void setScrollIndicators(final View view, final int n, final int n2) {
        view.setScrollIndicators(n, n2);
    }
}
