// 
// Decompiled by Procyon v0.5.30
// 

package android.support.v7.widget;

import android.graphics.drawable.Drawable;
import android.graphics.PorterDuff$Mode;
import android.content.res.ColorStateList;
import android.view.View;
import android.util.AttributeSet;
import android.content.Context;
import android.support.v4.g.ab;
import android.widget.ImageView;

public class p extends ImageView implements ab
{
    private g a;
    private o b;
    
    public p(final Context context) {
        this(context, null);
    }
    
    public p(final Context context, final AttributeSet set) {
        this(context, set, 0);
    }
    
    public p(final Context context, final AttributeSet set, final int n) {
        super(as.a(context), set, n);
        (this.a = new g((View)this)).a(set, n);
        (this.b = new o(this)).a(set, n);
    }
    
    protected void drawableStateChanged() {
        super.drawableStateChanged();
        if (this.a != null) {
            this.a.c();
        }
    }
    
    public ColorStateList getSupportBackgroundTintList() {
        if (this.a != null) {
            return this.a.a();
        }
        return null;
    }
    
    public PorterDuff$Mode getSupportBackgroundTintMode() {
        if (this.a != null) {
            return this.a.b();
        }
        return null;
    }
    
    public boolean hasOverlappingRendering() {
        return this.b.a() && super.hasOverlappingRendering();
    }
    
    public void setBackgroundDrawable(final Drawable backgroundDrawable) {
        super.setBackgroundDrawable(backgroundDrawable);
        if (this.a != null) {
            this.a.a(backgroundDrawable);
        }
    }
    
    public void setBackgroundResource(final int backgroundResource) {
        super.setBackgroundResource(backgroundResource);
        if (this.a != null) {
            this.a.a(backgroundResource);
        }
    }
    
    public void setImageResource(final int n) {
        this.b.a(n);
    }
    
    public void setSupportBackgroundTintList(final ColorStateList list) {
        if (this.a != null) {
            this.a.a(list);
        }
    }
    
    public void setSupportBackgroundTintMode(final PorterDuff$Mode porterDuff$Mode) {
        if (this.a != null) {
            this.a.a(porterDuff$Mode);
        }
    }
}
